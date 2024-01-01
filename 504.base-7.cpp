/*
 * @lc app=leetcode id=504 lang=cpp
 *
 * [504] Base 7
 */

// @lc code=start
#include <string>
using namespace std;

class Solution {
  public:
    string convertToBase7(int num) {
        if (num == 0)
            return "0";
        else if (num < 0)
            return "-" + convertToBase7(-num);
        string res = "";
        while (num) {
            res = to_string(num % 7) + res;
            num /= 7;
        }
        return res;
    }
};
// @lc code=end
