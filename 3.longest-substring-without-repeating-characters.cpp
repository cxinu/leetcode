/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> win_set;
        int l = 0, r = 0, max_len = 0;

        while (r < s.size()) {
            if (win_set.find(s[r]) == win_set.end()) {
                win_set.insert(s[r]);
                r++;
                max_len = max(max_len, r - l);
            } else {
                win_set.erase(s[l]);
                l++;
            }
        }
        return max_len;
    }
};
// @lc code=end
