/*
 * @lc app=leetcode id=987 lang=cpp
 *
 * [987] Vertical Order Traversal of a Binary Tree
 *
 * https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/
 *
 * algorithms
 * Hard (42.20%)
 * Likes:    4692
 * Dislikes: 3798
 * Total Accepted:    272.4K
 * Total Submissions: 629.4K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given the root of a binary tree, calculate the vertical order traversal of
 * the binary tree.
 *
 * For each node at position (row, col), its left and right children will be at
 * positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root
 * of the tree is at (0, 0).
 *
 * The vertical order traversal of a binary tree is a list of top-to-bottom
 * orderings for each column index starting from the leftmost column and ending
 * on the rightmost column. There may be multiple nodes in the same row and
 * same column. In such a case, sort these nodes by their values.
 *
 * Return the vertical order traversal of the binary tree.
 *
 *
 * Example 1:
 *
 *
 * Input: root = [3,9,20,null,null,15,7]
 * Output: [[9],[3,15],[20],[7]]
 * Explanation:
 * Column -1: Only node 9 is in this column.
 * Column 0: Nodes 3 and 15 are in this column in that order from top to
 * bottom.
 * Column 1: Only node 20 is in this column.
 * Column 2: Only node 7 is in this column.
 *
 * Example 2:
 *
 *
 * Input: root = [1,2,3,4,5,6,7]
 * Output: [[4],[2],[1,5,6],[3],[7]]
 * Explanation:
 * Column -2: Only node 4 is in this column.
 * Column -1: Only node 2 is in this column.
 * Column 0: Nodes 1, 5, and 6 are in this column.
 * ⁠         1 is at the top, so it comes first.
 * ⁠         5 and 6 are at the same position (2, 0), so we order them by their
 * value, 5 before 6.
 * Column 1: Only node 3 is in this column.
 * Column 2: Only node 7 is in this column.
 *
 *
 * Example 3:
 *
 *
 * Input: root = [1,2,3,4,6,5,7]
 * Output: [[4],[2],[1,5,6],[3],[7]]
 * Explanation:
 * This case is the exact same as example 2, but with nodes 5 and 6 swapped.
 * Note that the solution remains the same since 5 and 6 are in the same
 * location and should be ordered by their values.
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in the tree is in the range [1, 1000].
 * 0 <= Node.val <= 1000
 *
 *
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
public:
    struct Node
    {
        uint16_t val;
        uint16_t depth;
        Node(uint16_t val, uint16_t depth) : val(val), depth(depth) {}
    };
    struct NodeComparator
    {
        bool operator()(Node const &n1, Node const &n2) const { return n1.depth * 1000 + n1.val < n2.depth * 1000 + n2.val; }
    };
    vector<multiset<Node, NodeComparator>> res;
    void putToRes(TreeNode *root, uint16_t i, uint16_t depth)
    {
        if (root == nullptr)
            return;
        this->res[i].insert(Node(root->val, depth));
        putToRes(root->left, i - 1, depth + 1);
        putToRes(root->right, i + 1, depth + 1);
    }
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        vector<vector<int>> r;
        this->res = vector<multiset<Node, NodeComparator>>(2000, multiset<Node, NodeComparator>());
        putToRes(root, 1000, 0);
        for (multiset<Node, NodeComparator> itr : this->res)
            if (itr.size() > 0)
            {
                r.push_back(vector<int>(itr.size()));
                transform(itr.begin(), itr.end(), r[r.size() - 1].begin(), [](Node n)
                          { return n.val; });
            }
        return r;
    }
};
// @lc code=end
