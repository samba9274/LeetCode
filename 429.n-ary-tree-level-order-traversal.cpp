/*
 * @lc app=leetcode id=429 lang=cpp
 *
 * [429] N-ary Tree Level Order Traversal
 *
 * https://leetcode.com/problems/n-ary-tree-level-order-traversal/description/
 *
 * algorithms
 * Medium (69.30%)
 * Likes:    2331
 * Dislikes: 102
 * Total Accepted:    208.3K
 * Total Submissions: 298.9K
 * Testcase Example:  '[1,null,3,2,4,null,5,6]'
 *
 * Given an n-ary tree, return the level order traversal of its nodes' values.
 *
 * Nary-Tree input serialization is represented in their level order traversal,
 * each group of children is separated by the null value (See examples).
 *
 *
 * Example 1:
 *
 *
 *
 *
 * Input: root = [1,null,3,2,4,null,5,6]
 * Output: [[1],[3,2,4],[5,6]]
 *
 *
 * Example 2:
 *
 *
 *
 *
 * Input: root =
 * [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
 * Output: [[1],[2,3,4,5],[6,7,8,9,10],[11,12,13],[14]]
 *
 *
 *
 * Constraints:
 *
 *
 * The height of the n-ary tree is less than or equal to 1000
 * The total number of nodes is between [0, 10^4]
 *
 *
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> r;
        if (root == nullptr)
            return r;
        queue<Node *> q;
        Node *itr;
        q.push(root);
        q.push(nullptr);
        r.push_back(vector<int>());
        for (itr = q.front(), q.pop(); !q.empty(); itr = q.front(), q.pop())
        {
            if (itr == nullptr && q.front() != nullptr)
            {
                r.push_back(vector<int>());
                q.push(nullptr);
                continue;
            }
            r[r.size() - 1].push_back(itr->val);
            for (Node *child : itr->children)
                q.push(child);
        }
        return r;
    }
};
// @lc code=end
