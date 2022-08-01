/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution
{
public:
    uint32_t uniquePaths(uint8_t m, uint8_t n)
    {
        uint64_t res = 1;
        for (uint8_t i = max(m - 1, n - 1) + 1, j = 1; i <= (m + n - 2) || j < min(m - 1, n - 1); i++)
        {
            if (i <= (m + n - 2))
                res *= i;
            while (res % j == 0 && j <= min(m - 1, n - 1))
                res /= j++;
        }
        return res;
    }
};
// @lc code=end
