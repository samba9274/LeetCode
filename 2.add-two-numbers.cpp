/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *root = new ListNode(), *node = root;
        int carry = 0;
        while (l1 != nullptr && l2 != nullptr)
        {
            int sum = l1->val + l2->val + carry;
            carry = 0;
            if (sum >= 10)
            {
                carry++;
                sum %= 10;
            }
            node->next = new ListNode(sum);
            node = node->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != nullptr)
        {
            int sum = l1->val + carry;
            carry = 0;
            if (sum >= 10)
            {
                carry++;
                sum %= 10;
            }
            node->next = new ListNode(sum);
            node = node->next;
            l1 = l1->next;
        }
        while (l2 != nullptr)
        {
            int sum = l2->val + carry;
            carry = 0;
            if (sum >= 10)
            {
                carry++;
                sum %= 10;
            }
            node->next = new ListNode(sum);
            node = node->next;
            l2 = l2->next;
        }
        if (carry)
            node->next = new ListNode(carry);
        return root->next;
    }
};
// @lc code=end
