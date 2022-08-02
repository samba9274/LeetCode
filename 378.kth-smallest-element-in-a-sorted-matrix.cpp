/*
 * @lc app=leetcode id=378 lang=cpp
 *
 * [378] Kth Smallest Element in a Sorted Matrix
 */

// @lc code=start
class Solution
{
public:
    int kthSmallest(vector<vector<int32_t>> &matrix, uint16_t k)
    {
        vector<uint16_t> pos(matrix.size(), 0);
        int32_t minElement;
        uint16_t minRow, i;
        for (minRow = 0; k > 0; k--, pos[minRow]++, minRow = 0)
            for (i = 0, minElement = INT32_MAX; i < matrix.size(); i++)
                if (pos[i] < matrix.size() && matrix[i][pos[i]] < minElement)
                {
                    minElement = matrix[i][pos[i]];
                    minRow = i;
                }
        return minElement;
    }
};
// @lc code=end
