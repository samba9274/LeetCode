/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        set<int> s;
        for (int num : nums)
            s.insert(num);
        int k = 1;
        for (int num : s)
        {
            if (num < 1)
                continue;
            if (num == k)
                k++;
            else
                return k;
        }
        return k;
    }
};
// @lc code=end
