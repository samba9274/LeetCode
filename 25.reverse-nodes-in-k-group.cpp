/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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
