class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if len(s) == 0:
            return 0
        
        lis = s.split(" ")
        index = len(lis)-1
        while len(lis[index]) == 0:
            index -= 1
            if index == -1:
                return 0
        return len(lis[index])
