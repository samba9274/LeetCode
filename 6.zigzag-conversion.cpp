/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, uint16_t numRows)
    {
        if (numRows == 1)
            return s;

        const uint16_t sLen = s.length();

        for (uint16_t i = 0; i < numRows; i++)
            for (uint16_t j = i; j < sLen; j += (numRows - 1) * 2)
            {
                s += s[j];
                if (i != 0 && i != numRows - 1 && (j + (numRows - 1 - i) * 2) < sLen)
                    s += s[(j + (numRows - 1 - i) * 2)];
            }

        return s.substr(sLen);
    }
};
// @lc code=end
