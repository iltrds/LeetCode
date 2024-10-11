class Solution(object):
    def twoSum(self, nums, target):
        previousMap = {} #numbers that have been passed
        
        for i, num in enumerate(nums):
            diff = target-num
            if diff in previousMap:
                return {previousMap[diff],i}
            previousMap[num] = i
            
                
        