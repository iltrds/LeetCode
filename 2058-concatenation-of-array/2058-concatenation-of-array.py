class Solution(object):
    def getConcatenation(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        size = len(nums)
        myArray = list()

        for i in range(size * 2):
            myArray.append(nums[i % size])
        
        return myArray