/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
  public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int mid = 0, res = nums[0];
        while (left <= right) {
            if (nums[left] < nums[right]) {
                res = min(res, nums[left]);
                break;
            }
            mid = (left + right) / 2;
            res = min(res, nums[mid]);
            if (nums[mid] >= nums[left])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return res;
    }
};
// @lc code=end
