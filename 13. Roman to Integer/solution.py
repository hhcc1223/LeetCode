class Solution:
    def romanToInt(self, s: str) -> int:
        mapp = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        if len(s) == 1: return mapp[s[0]]
        res = 0
        idx = 0
        while idx < len(s):
            if idx != len(s) - 1 and mapp[s[idx]] < mapp[s[idx+1]]:
                res += mapp[s[idx+1]] - mapp[s[idx]]
                idx += 2
            else:
                res += mapp[s[idx]]
                idx += 1
        return res
