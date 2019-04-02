# Author: Hussam
# description: https://leetcode.com/problems/robot-return-to-origin/
# time: O(n), space: O(1)


class Solution:
    def judgeCircle(self, moves: str) -> bool:
        move_dic = {'R':0, 'L':0, 'U':0, 'D':0}
        for m in moves:
            move_dic[m]+=1
        return move_dic['R'] == move_dic['L'] and move_dic['U'] == move_dic['D']