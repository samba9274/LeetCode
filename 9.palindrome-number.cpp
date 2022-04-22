/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        string strRev = to_string(x), str = strRev;
        reverse(strRev.begin(), strRev.end());
        return strRev == str;
    }
};
// @lc code=end
