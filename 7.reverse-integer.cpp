/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 *
 * https://leetcode.com/problems/reverse-integer/description/
 *
 * algorithms
 * Medium (26.93%)
 * Likes:    7801
 * Dislikes: 10274
 * Total Accepted:    2.2M
 * Total Submissions: 8M
 * Testcase Example:  '123'
 *
 * Given a signed 32-bit integer x, return x with its digits reversed. If
 * reversing x causes the value to go outside the signed 32-bit integer range
 * [-2^31, 2^31 - 1], then return 0.
 *
 * Assume the environment does not allow you to store 64-bit integers (signed
 * or unsigned).
 *
 *
 * Example 1:
 *
 *
 * Input: x = 123
 * Output: 321
 *
 *
 * Example 2:
 *
 *
 * Input: x = -123
 * Output: -321
 *
 *
 * Example 3:
 *
 *
 * Input: x = 120
 * Output: 21
 *
 *
 *
 * Constraints:
 *
 *
 * -2^31 <= x <= 2^31 - 1
 *
 *
 */

// @lc code=start
class Solution
{
public:
    int reverse(int32_t x)
    {
        string strNum = to_string(abs(x));
        std::reverse(strNum.begin(), strNum.end());
        int64_t reverseNum = stol(strNum);
        if (x < 0)
            reverseNum *= -1;
        if (reverseNum > INT_MAX || reverseNum < INT_MIN)
            return 0;
        return reverseNum;
    }
};
// @lc code=end
