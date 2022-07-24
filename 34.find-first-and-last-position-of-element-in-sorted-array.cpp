/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> res;
        res.push_back(-1);
        res.push_back(-1);
        unsigned int mid, l, h, n = nums.size();
        for (mid = n / 2, l = 0, h = n; l < h && nums[mid] != target;)
        {
            if (nums[mid] < target)
                l = mid + 1;
            else
                h = mid;
            mid = (l + h) / 2;
        }
        if (l >= h)
            return res;
        res[0] = mid;
        res[1] = mid;
        while (mid >= 0 && mid < nums.size() && nums[mid] == target)
            mid++;
        res[1] = mid - 1;
        mid = res[0];
        while (mid >= 0 && mid < nums.size() && nums[mid] == target)
            mid--;
        res[0] = mid + 1;
        return res;
    }
};
// @lc code=end
