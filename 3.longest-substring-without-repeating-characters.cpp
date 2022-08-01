/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<uint8_t, uint16_t> lookup;
        uint16_t start = 0, length = 0;
        for (uint16_t i = 0; i < s.length(); start = lookup.find(s[i]) != lookup.end() ? max(start, (uint16_t)(lookup[s[i]] + 1)) : start, lookup[s[i]] = i, length = max(length, (uint16_t)(i - start + 1)), i++)
            ;
        return length;
    }
};
// @lc code=end
