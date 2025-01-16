class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        isTrue = []
        maxCandy = 0
        for kid in candies:
            if kid > maxCandy:
                maxCandy = kid
        
        for kid in candies:
            if kid + extraCandies >= maxCandy:
                isTrue.append(True)
            else:
                isTrue.append(False)

        return isTrue
        