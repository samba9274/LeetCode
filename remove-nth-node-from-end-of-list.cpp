#include <bits/stdc++.h>
using namespace std;
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