class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        notNums = 0

        for i, num in enumerate(nums):
            if not num == val:
                nums[notNums] = num
                notNums += 1
    
        return notNums

        