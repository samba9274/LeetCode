/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        vector<ListNode *> nodes;
        int size = 0;
        for (ListNode *trav = head; trav != nullptr; trav = trav->next)
        {
            nodes.push_back(trav);
            size++;
        }
        if (size - n == 0)
            return nodes[size - n]->next;
        nodes[size - n - 1]->next = nodes[size - n]->next;
        return head;
    }
};
// @lc code=end
