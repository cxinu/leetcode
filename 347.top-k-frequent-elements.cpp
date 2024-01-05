/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int max_freq = 0;
        for (int num : nums) {
            max_freq = max(max_freq, ++count[num]);
        }

        vector<vector<int>> buckets(max_freq + 1);
        for (auto& p : count) {
            buckets[p.second].push_back(p.first);
        }

        vector<int> ans;
        for (int i = max_freq; i >= 0 && ans.size() < k; --i) {
            for (auto& num : buckets[i]) {
                ans.push_back(num);
                if (ans.size() == k) {
                    break;
                }
            }
        }
        return ans;
    }
};
// @lc code=end
