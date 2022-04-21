#include <bits/stdc++.h>
using namespace std;
class MyHashSet
{
private:
    vector<bool> *set;

public:
    MyHashSet() : set(new vector<bool>(1000001, false)) {}
    void add(int key) { (*set)[key] = true; }
    void remove(int key) { (*set)[key] = false; }
    bool contains(int key) { return (*set)[key]; }
};