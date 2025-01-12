class Solution(object):
    def countStudents(self, students, sandwiches):
        """
        :type students: List[int]
        :type sandwiches: List[int]
        :rtype: int
        """
        leftOver = len(sandwiches)
        countMap = Counter(students)

        for i in sandwiches:
            if countMap[i] > 0:
                leftOver -= 1
                countMap[i] -= 1
            else:
                return leftOver
        return leftOver
        