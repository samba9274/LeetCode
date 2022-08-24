/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 *
 * https://leetcode.com/problems/unique-paths/description/
 *
 * algorithms
 * Medium (60.80%)
 * Likes:    10806
 * Dislikes: 328
 * Total Accepted:    1.1M
 * Total Submissions: 1.8M
 * Testcase Example:  '3\n7'
 *
 * There is a robot on an m x n grid. The robot is initially located at the
 * top-left corner (i.e., grid[0][0]). The robot tries to move to the
 * bottom-right corner (i.e., grid[m - 1][n - 1]). The robot can only move
 * either down or right at any point in time.
 *
 * Given the two integers m and n, return the number of possible unique paths
 * that the robot can take to reach the bottom-right corner.
 *
 * The test cases are generated so that the answer will be less than or equal
 * to 2 * 10^9.
 *
 *
 * Example 1:
 *
 *
 * Input: m = 3, n = 7
 * Output: 28
 *
 *
 * Example 2:
 *
 *
 * Input: m = 3, n = 2
 * Output: 3
 * Explanation: From the top-left corner, there are a total of 3 ways to reach
 * the bottom-right corner:
 * 1. Right -> Down -> Down
 * 2. Down -> Down -> Right
 * 3. Down -> Right -> Down
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= m, n <= 100
 *
 *
 */

// @lc code=start
class Solution
{
public:
    uint32_t uniquePaths(uint8_t m, uint8_t n)
    {
        uint64_t res = 1;
        for (uint8_t i = max(m - 1, n - 1) + 1, j = 1; i <= (m + n - 2) || j < min(m - 1, n - 1); i++)
        {
            if (i <= (m + n - 2))
                res *= i;
            while (res % j == 0 && j <= min(m - 1, n - 1))
                res /= j++;
        }
        return res;
    }
};
// @lc code=end
