/*
 * @lc app=leetcode id=377 lang=cpp
 *
 * [377] Combination Sum IV
 *
 * https://leetcode.com/problems/combination-sum-iv/description/
 *
 * algorithms
 * Medium (49.89%)
 * Likes:    4432
 * Dislikes: 480
 * Total Accepted:    288.1K
 * Total Submissions: 566.6K
 * Testcase Example:  '[1,2,3]\n4'
 *
 * Given an array of distinct integers nums and a target integer target, return
 * the number of possible combinations that add up to target.
 *
 * The test cases are generated so that the answer can fit in a 32-bit
 * integer.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,2,3], target = 4
 * Output: 7
 * Explanation:
 * The possible combination ways are:
 * (1, 1, 1, 1)
 * (1, 1, 2)
 * (1, 2, 1)
 * (1, 3)
 * (2, 1, 1)
 * (2, 2)
 * (3, 1)
 * Note that different sequences are counted as different combinations.
 *
 *
 * Example 2:
 *
 *
 * Input: nums = [9], target = 3
 * Output: 0
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= nums.length <= 200
 * 1 <= nums[i] <= 1000
 * All the elements of nums are unique.
 * 1 <= target <= 1000
 *
 *
 *
 * Follow up: What if negative numbers are allowed in the given array? How does
 * it change the problem? What limitation we need to add to the question to
 * allow negative numbers?
 *
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
