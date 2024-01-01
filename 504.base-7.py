#
# @lc app=leetcode id=504 lang=python3
#
# [504] Base 7
#

# @lc code=start
class Solution:
    def convertToBase7(self, num: int) -> str:
        if num == 0: return "0"
        if num < 0: return "-" + self.convertToBase7(-num)
        res = ""
        while num:
            res = str(num % 7) + res
            num //= 7
        return res
# @lc code=end

