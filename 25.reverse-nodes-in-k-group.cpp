/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
 *
 * https://leetcode.com/problems/reverse-nodes-in-k-group/description/
 *
 * algorithms
 * Hard (52.22%)
 * Likes:    8696
 * Dislikes: 528
 * Total Accepted:    577.6K
 * Total Submissions: 1.1M
 * Testcase Example:  '[1,2,3,4,5]\n2'
 *
 * Given the head of a linked list, reverse the nodes of the list k at a time,
 * and return the modified list.
 *
 * k is a positive integer and is less than or equal to the length of the
 * linked list. If the number of nodes is not a multiple of k then left-out
 * nodes, in the end, should remain as it is.
 *
 * You may not alter the values in the list's nodes, only nodes themselves may
 * be changed.
 *
 *
 * Example 1:
 *
 *
 * Input: head = [1,2,3,4,5], k = 2
 * Output: [2,1,4,3,5]
 *
 *
 * Example 2:
 *
 *
 * Input: head = [1,2,3,4,5], k = 3
 * Output: [3,2,1,4,5]
 *
 *
 *
 * Constraints:
 *
 *
 * The number of nodes in the list is n.
 * 1 <= k <= n <= 5000
 * 0 <= Node.val <= 1000
 *
 *
 *
 * Follow-up: Can you solve the problem in O(1) extra memory space?
 *
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (k == 1)
            return head;
        int count = 1;
        ListNode *node = nullptr;
        for (node = head; node->next != nullptr; node = node->next, count++)
            ;
        node = head;
        vector<ListNode *> starts, ends;
        ListNode *s = nullptr, *e = nullptr, *t = nullptr;
        for (int i = 0; i < (count / k); i++)
        {
            for (int j = 0; j < k; j++)
            {
                s = new ListNode(node->val, t);
                t = s;
                if (e == nullptr)
                    e = s;
                node = node->next;
            }
            starts.push_back(s);
            ends.push_back(e);
            e = nullptr, s = nullptr, t = nullptr;
        }
        for (int i = 1; i < ends.size(); i++)
            ends[i - 1]->next = starts[i];
        t = ends[ends.size() - 1];
        while (node != nullptr)
        {
            t->next = node;
            node = node->next;
            t = t->next;
        }
        return starts[0];
    }
};
// @lc code=end
