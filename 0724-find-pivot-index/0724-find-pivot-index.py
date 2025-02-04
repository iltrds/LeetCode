class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return -1

        n = len(nums)
        sumLeft = [0] * n
        sumRight = [0] * n

        # Calculate the left sum
        sumLeft[0] = nums[0]
        for i in range(1, n):
            sumLeft[i] = sumLeft[i-1] + nums[i]

        # Calculate the right sum
        sumRight[-1] = nums[-1]
        for i in range(n-2, -1, -1):
            sumRight[i] = sumRight[i+1] + nums[i]

        # Find the pivot index
        for i in range(n):
            if sumLeft[i] == sumRight[i]:
                return i

        return -1