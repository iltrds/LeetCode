class Solution(object):
    def groupAnagrams(self, strs):
        res = defaultdict(list) #mapping charCount to list of anagrams
        
        for s in strs:
            count = [0] * 26 # a,b,c, ... z
            
            for char in s:
                count[ord(char) - ord("a")] += 1
            
            res[tuple(count)].append(s) #tuple compares the key generated in count to lists currently in the hashmap
        
        return res.values()