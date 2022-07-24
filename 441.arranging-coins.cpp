/*
 * @lc app=leetcode id=441 lang=cpp
 *
 * [441] Arranging Coins
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
