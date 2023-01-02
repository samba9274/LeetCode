/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 *
 * https://leetcode.com/problems/detect-capital/description/
 *
 * algorithms
 * Easy (55.55%)
 * Likes:    1971
 * Dislikes: 388
 * Total Accepted:    292.6K
 * Total Submissions: 524.3K
 * Testcase Example:  '"USA"'
 *
 * We define the usage of capitals in a word to be right when one of the
 * following cases holds:
 *
 *
 * All letters in this word are capitals, like "USA".
 * All letters in this word are not capitals, like "leetcode".
 * Only the first letter in this word is capital, like "Google".
 *
 *
 * Given a string word, return true if the usage of capitals in it is right.
 *
 *
 * Example 1:
 * Input: word = "USA"
 * Output: true
 * Example 2:
 * Input: word = "FlaG"
 * Output: false
 *
 *
 * Constraints:
 *
 *
 * 1 <= word.length <= 100
 * word consists of lowercase and uppercase English letters.
 *
 *
 */

// @lc code=start
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        uint8_t capitalCount = 0;
        for_each(word.begin(), word.end(), [&capitalCount](uint8_t c)
                 { capitalCount += isupper(c) ? 1 : 0; });
        return ((capitalCount == 1 && word[0] < 'a') || capitalCount == word.size() || capitalCount == 0);
    }
};
// @lc code=end
