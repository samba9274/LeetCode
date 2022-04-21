#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        int m = 0, n = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ' || i == s.size() - 1)
            {
                n = i == s.size() - 1 ? i : i - 1;
                while (m < n)
                    swap(s[m++], s[n--]);
                m = i + 1;
                n = i + 1;
            }
        }
        return s;
    }
};