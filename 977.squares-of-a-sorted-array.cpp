/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> sortedSq(nums.size());
        int i = 0, j = nums.size() - 1;
        for (int k = nums.size() - 1; k >= 0; k--)
            sortedSq[k] = abs(nums[i]) < abs(nums[j]) ? nums[j] * nums[j--] : nums[i] * nums[i++];
        return sortedSq;
    }
};
// @lc code=end
