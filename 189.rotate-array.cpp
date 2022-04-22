/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {

        k %= nums.size();
        int n = nums.size();
        for (int i = n - k; i < n; i++)
            nums.push_back(nums[i]);
        for (int i = n - k - 1, j = n - 1; i >= 0; i--, j--)
            nums[j] = nums[i];
        for (int i = n, j = 0; i < n + k; i++, j++)
            nums[j] = nums[i];
        nums.erase(nums.begin() + n, nums.end());
    }
};
// @lc code=end
