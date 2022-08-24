/*
 * @lc app=leetcode id=378 lang=cpp
 *
 * [378] Kth Smallest Element in a Sorted Matrix
 *
 * https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/
 *
 * algorithms
 * Medium (60.11%)
 * Likes:    6485
 * Dislikes: 249
 * Total Accepted:    414.3K
 * Total Submissions: 687.5K
 * Testcase Example:  '[[1,5,9],[10,11,13],[12,13,15]]\n8'
 *
 * Given an n x n matrix where each of the rows and columns is sorted in
 * ascending order, return the k^th smallest element in the matrix.
 *
 * Note that it is the k^th smallest element in the sorted order, not the k^th
 * distinct element.
 *
 * You must find a solution with a memory complexity better than O(n^2).
 *
 *
 * Example 1:
 *
 *
 * Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
 * Output: 13
 * Explanation: The elements in the matrix are [1,5,9,10,11,12,13,13,15], and
 * the 8^th smallest number is 13
 *
 *
 * Example 2:
 *
 *
 * Input: matrix = [[-5]], k = 1
 * Output: -5
 *
 *
 *
 * Constraints:
 *
 *
 * n == matrix.length == matrix[i].length
 * 1 <= n <= 300
 * -10^9 <= matrix[i][j] <= 10^9
 * All the rows and columns of matrix are guaranteed to be sorted in
 * non-decreasing order.
 * 1 <= k <= n^2
 *
 *
 *
 * Follow up:
 *
 *
 * Could you solve the problem with a constant memory (i.e., O(1) memory
 * complexity)?
 * Could you solve the problem in O(n) time complexity? The solution may be too
 * advanced for an interview but you may find reading this paper fun.
 *
 *
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
