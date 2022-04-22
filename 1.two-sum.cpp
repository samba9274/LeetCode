/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            vector<int>::iterator it = find(nums.begin() + i + 1, nums.end(), target - nums[i]);
            if (it != nums.end())
                return vector<int>({i, (int)(it - nums.begin())});
        }
        return vector<int>();
    }
};
// @lc code=end
