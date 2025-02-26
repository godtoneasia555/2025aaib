#leetcode 1. Two Sum
#有一堆數字 nums 裡面「哪兩個」相加，是target
#nums「i」+nums「j」==target 找到i 和 j 使得加起來是target
class Solution:
        def twoSum(self, nums: List[int], target: int) -> List[int]:
            box={} #有一個箱子,裡面放「出現過的數字」
            #我悶想要湊出 target 這個加總

            for i, num in enumerate(nums):
                other = target - num #另外一個需要的數「可以湊出target」的(target-num)
                if other in box:#在箱子裡，有令歪一哥需要的數
                    return[ box[other], i ]#找到答案
                else:#如果沒有合適的數字湊合
                    box[num]=i # 就現在的數字num, 放到box裡面
    
        