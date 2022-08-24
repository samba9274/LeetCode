/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 *
 * https://leetcode.com/problems/zigzag-conversion/description/
 *
 * algorithms
 * Medium (42.22%)
 * Likes:    4084
 * Dislikes: 9163
 * Total Accepted:    812.3K
 * Total Submissions: 1.9M
 * Testcase Example:  '"PAYPALISHIRING"\n3'
 *
 * The string "PAYPALISHIRING" is written in a zigzag pattern on a given number
 * of rows like this: (you may want to display this pattern in a fixed font for
 * better legibility)
 *
 *
 * P   A   H   N
 * A P L S I I G
 * Y   I   R
 *
 *
 * And then read line by line: "PAHNAPLSIIGYIR"
 *
 * Write the code that will take a string and make this conversion given a
 * number of rows:
 *
 *
 * string convert(string s, int numRows);
 *
 *
 *
 * Example 1:
 *
 *
 * Input: s = "PAYPALISHIRING", numRows = 3
 * Output: "PAHNAPLSIIGYIR"
 *
 *
 * Example 2:
 *
 *
 * Input: s = "PAYPALISHIRING", numRows = 4
 * Output: "PINALSIGYAHRPI"
 * Explanation:
 * P     I    N
 * A   L S  I G
 * Y A   H R
 * P     I
 *
 *
 * Example 3:
 *
 *
 * Input: s = "A", numRows = 1
 * Output: "A"
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= s.length <= 1000
 * s consists of English letters (lower-case and upper-case), ',' and '.'.
 * 1 <= numRows <= 1000
 *
 *
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
