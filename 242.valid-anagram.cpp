/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        if (s.size() != t.size())
            return false;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
            m[t[i]]--;
        }
        for (auto x : m) {
            if (x.second != 0)
                return false;
        }
        return true;
    }
};
// @lc code=end
