/*
 * @lc app=leetcode id=377 lang=cpp
 *
 * [377] Combination Sum IV
 */

// @lc code=start
class Solution
{
public:
    uint32_t combinationSum4(vector<int> &nums, uint16_t target)
    {
        vector<uint32_t> count(target + 1, 0);
        count[0] = 1;
        for (uint16_t i = 0; i <= target; i++)
            for (uint16_t j = 0; j < nums.size(); j++)
                if (nums[j] <= i)
                    count[i] += count[i - nums[j]];
        return count[target];
    }
};
// @lc code=end
