class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowelList = {"a","e","i","o","u","A","E","I","O","U"}
        foundVowels = []

        charList = list(s) # breaks the list into characters
        for char in charList:
            if char in vowelList:
                foundVowels.append(char) # add found vowel to stack
        
        finalString = ""

        for i, char in enumerate(charList):
            if char in vowelList:
                charList[i] = foundVowels.pop() # pop to replace vowel
            finalString = finalString+charList[i]
        
        return finalString
        