/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.size() == 0)
            return nullptr;
        ListNode *root = new ListNode(), *node = root;
        bool flag = true;
        while (true)
        {
            int x = 10001, i, k;
            for (i = 0; i < lists.size(); i++)
            {
                if (lists[i] != nullptr && lists[i]->val < x)
                {
                    x = lists[i]->val;
                    k = i;
                }
            }
            if (x != 10001)
            {
                node->next = new ListNode(x);
                node = node->next;
            }
            else
                break;
            if (lists[k] != nullptr)
                lists[k] = lists[k]->next;
        }
        return root->next;
    }
};
// @lc code=end
