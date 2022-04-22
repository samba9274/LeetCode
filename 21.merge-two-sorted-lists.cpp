/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *root = new ListNode(), *node = root;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val < list2->val)
            {
                node->next = new ListNode(list1->val);
                node = node->next;
                list1 = list1->next;
            }
            else
            {
                node->next = new ListNode(list2->val);
                node = node->next;
                list2 = list2->next;
            }
        }
        while (list1 != nullptr)
        {
            node->next = new ListNode(list1->val);
            node = node->next;
            list1 = list1->next;
        }
        while (list2 != nullptr)
        {
            node->next = new ListNode(list2->val);
            node = node->next;
            list2 = list2->next;
        }
        return root->next;
    }
};
// @lc code=end
