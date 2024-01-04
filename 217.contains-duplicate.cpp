/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
  public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for (auto a : nums) {
            if (set.find(a) == set.end())
                set.insert(a);
            else
                return true;
        }
        return false;
    }
};
// @lc code=end
