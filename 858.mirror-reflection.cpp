/*
 * @lc app=leetcode id=858 lang=cpp
 *
 * [858] Mirror Reflection
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
