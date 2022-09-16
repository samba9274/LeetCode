/*
 * @lc app=leetcode id=1770 lang=cpp
 *
 * [1770] Maximum Score from Performing Multiplication Operations
 *
 * https://leetcode.com/problems/maximum-score-from-performing-multiplication-operations/description/
 *
 * algorithms
 * Medium (34.62%)
 * Likes:    916
 * Dislikes: 247
 * Total Accepted:    42.4K
 * Total Submissions: 122.8K
 * Testcase Example:  '[1,2,3]\n[3,2,1]'
 *
 * You are given two integer arrays nums and multipliers of size n and m
 * respectively, where n >= m. The arrays are 1-indexed.
 *
 * You begin with a score of 0. You want to perform exactly m operations. On
 * the i^th operation (1-indexed), you will:
 *
 *
 * Choose one integer x from either the start or the end of the array nums.
 * Add multipliers[i] * x to your score.
 * Remove x from the array nums.
 *
 *
 * Return the maximum score after performing m operations.
 *
 *
 * Example 1:
 *
 *
 * Input: nums = [1,2,3], multipliers = [3,2,1]
 * Output: 14
 * Explanation: An optimal solution is as follows:
 * - Choose from the end, [1,2,3], adding 3 * 3 = 9 to the score.
 * - Choose from the end, [1,2], adding 2 * 2 = 4 to the score.
 * - Choose from the end, [1], adding 1 * 1 = 1 to the score.
 * The total score is 9 + 4 + 1 = 14.
 *
 * Example 2:
 *
 *
 * Input: nums = [-5,-3,-3,-2,7,1], multipliers = [-10,-5,3,4,6]
 * Output: 102
 * Explanation: An optimal solution is as follows:
 * - Choose from the start, [-5,-3,-3,-2,7,1], adding -5 * -10 = 50 to the
 * score.
 * - Choose from the start, [-3,-3,-2,7,1], adding -3 * -5 = 15 to the score.
 * - Choose from the start, [-3,-2,7,1], adding -3 * 3 = -9 to the score.
 * - Choose from the end, [-2,7,1], adding 1 * 4 = 4 to the score.
 * - Choose from the end, [-2,7], adding 7 * 6 = 42 to the score.
 * The total score is 50 + 15 - 9 + 4 + 42 = 102.
 *
 *
 *
 * Constraints:
 *
 *
 * n == nums.length
 * m == multipliers.length
 * 1 <= m <= 10^3
 * m <= n <= 10^5
 * -1000 <= nums[i], multipliers[i] <= 1000
 *
 *
 */

// @lc code=start
class Solution
{
public:
    int maximumScore(vector<int> &nums, vector<int> &multipliers)
    {
        vector<int> cur(multipliers.size() + 1, 0), next(multipliers.size() + 1, 0);
        for (int i = multipliers.size() - 1; i >= 0; next = cur, i--)
            for (int j = multipliers.size() - i - 1; j >= 0; j--)
                cur[j] = max(nums[i] * multipliers[i + j] + next[j], nums[nums.size() - j - 1] * multipliers[i + j] + cur[j + 1]);
        return next[0];
    }
};
// @lc code=end
