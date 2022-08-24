/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
 *
 * https://leetcode.com/problems/arranging-coins/description/
 *
 * algorithms
 * Easy (45.72%)
 * Likes:    2471
 * Dislikes: 1073
 * Total Accepted:    296.5K
 * Total Submissions: 648.5K
 * Testcase Example:  '5'
 *
 * You have n coins and you want to build a staircase with these coins. The
 * staircase consists of k rows where the i^th row has exactly i coins. The
 * last row of the staircase may be incomplete.
 *
 * Given the integer n, return the number of complete rows of the staircase you
 * will build.
 *
 *
 * Example 1:
 *
 *
 * Input: n = 5
 * Output: 2
 * Explanation: Because the 3^rd row is incomplete, we return 2.
 *
 *
 * Example 2:
 *
 *
 * Input: n = 8
 * Output: 3
 * Explanation: Because the 4^th row is incomplete, we return 3.
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= n <= 2^31 - 1
 *
 *
 */

// @lc code=start
class Solution
{
public:
    unsigned short int arrangeCoins(unsigned int n)
    {
        return sqrt(0.25 + 2 * n) - 0.5;
    }
};
// @lc code=end
