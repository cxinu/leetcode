/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> res;
        for (int i = 0; i < strs.size(); i++) {
            string t = strs[i];
            sort(t.begin(), t.end());
            m[t].push_back(strs[i]);
        }
        for (auto x : m) {
            res.push_back(x.second);
        }
        return res;
    }
};
// @lc code=end
