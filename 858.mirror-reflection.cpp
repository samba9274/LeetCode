/*
 * @lc app=leetcode id=858 lang=cpp
 *
 * [858] Mirror Reflection
 *
 * https://leetcode.com/problems/mirror-reflection/description/
 *
 * algorithms
 * Medium (59.54%)
 * Likes:    601
 * Dislikes: 1313
 * Total Accepted:    38.7K
 * Total Submissions: 63.7K
 * Testcase Example:  '2\n1'
 *
 * There is a special square room with mirrors on each of the four walls.
 * Except for the southwest corner, there are receptors on each of the
 * remaining corners, numbered 0, 1, and 2.
 *
 * The square room has walls of length p and a laser ray from the southwest
 * corner first meets the east wall at a distance q from the 0^th receptor.
 *
 * Given the two integers p and q, return the number of the receptor that the
 * ray meets first.
 *
 * The test cases are guaranteed so that the ray will meet a receptor
 * eventually.
 *
 *
 * Example 1:
 *
 *
 * Input: p = 2, q = 1
 * Output: 2
 * Explanation: The ray meets receptor 2 the first time it gets reflected back
 * to the left wall.
 *
 *
 * Example 2:
 *
 *
 * Input: p = 3, q = 1
 * Output: 1
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= q <= p <= 1000
 *
 *
 */

// @lc code=start
class Solution
{
public:
    uint8_t mirrorReflection(uint8_t p, uint8_t q)
    {
        uint8_t i;
        for (i = 1; i * q % p != 0; i++)
            ;
        if (i % 2 == 0)
            return 2;
        if ((i * q / p) % 2 == 0)
            return 0;
        return 1;
    }
};
// @lc code=end
