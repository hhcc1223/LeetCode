class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0: return False
        lis = []
        while x != 0:
            lis.append(x % 10)
            x = x //10
        return lis == lis[::-1]
