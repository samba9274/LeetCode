/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 *
 * https://leetcode.com/problems/valid-perfect-square/description/
 *
 * algorithms
 * Easy (43.19%)
 * Likes:    2587
 * Dislikes: 246
 * Total Accepted:    394.4K
 * Total Submissions: 913.3K
 * Testcase Example:  '16'
 *
 * Given a positive integer num, write a function which returns True if num is
 * a perfect square else False.
 *
 * Follow up: Do not use any built-in library function such as sqrt.
 *
 *
 * Example 1:
 * Input: num = 16
 * Output: true
 * Example 2:
 * Input: num = 14
 * Output: false
 *
 *
 * Constraints:
 *
 *
 * 1 <= num <= 2^31 - 1
 *
 *
 */

// @lc code=start
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        for (int i = 1; i < 46341 && i * i <= num; i++)
            if (i * i == num)
                return true;
        return false;
    }
};
// @lc code=end
