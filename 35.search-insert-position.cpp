/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int i = 0, j = nums.size() - 1;
        for (int k = (i + j) / 2; i <= j; k = (i + j) / 2)
        {
            if (nums[k] == target)
                return k;
            else if (nums[k] < target)
                i = k + 1;
            else
                j = k - 1;
        }
        return i;
    }
};
// @lc code=end
