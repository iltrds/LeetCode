class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        numUnique = 0
        uniqueList = []

        for num in nums:
            if not num in uniqueList:
                uniqueList.append(num) # add unique number to the unique number list
                nums[numUnique] = num
                numUnique += 1

        return numUnique
