class Solution(object):
    def isValid(self, s):
        stack = list()
        

        for char in s:
            if char == '(' or char == '{' or char == '[':
                stack.append(char)
            elif char == ')':
                if len(stack) == 0 or not stack.pop() == '(':
                    return False
            elif char == '}':
                if len(stack) == 0 or not stack.pop() == '{':
                    return False
            elif char == ']':
                if len(stack) == 0 or not stack.pop() == '[':
                    return False
        
        if len(stack) == 0:
            return True
        else:
            return False
        
                
                    

        
        