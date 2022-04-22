/*
 * @lc app=leetcode id=705 lang=cpp
 *
 * [705] Design HashSet
 */

// @lc code=start
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

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
// @lc code=end
