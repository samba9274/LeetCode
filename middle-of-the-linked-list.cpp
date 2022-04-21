#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *mid = head;
        for (; head->next != nullptr && head->next->next != nullptr; head = head->next->next, mid = mid->next)
            ;
        return mid;
    }
};