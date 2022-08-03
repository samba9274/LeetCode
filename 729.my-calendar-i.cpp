/*
 * @lc app=leetcode id=729 lang=cpp
 *
 * [729] My Calendar I
 */

// @lc code=start
class MyCalendar
{
    vector<uint32_t> starts, ends;

public:
    MyCalendar()
    {
    }

    bool book(uint32_t start, uint32_t end)
    {
        for (uint32_t i = 0; i < starts.size(); i++)
            if ((start >= starts[i] && start < ends[i]) || (end > starts[i] && end < ends[i]) || (start < starts[i] && end >= ends[i]))
                return false;
        starts.push_back(start);
        ends.push_back(end);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
// @lc code=end
