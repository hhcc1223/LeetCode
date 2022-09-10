class Solution:
    def isValid(self, s: str) -> bool:
        mapp = {")":"(", "}":"{", "]":"["}
        stack = []
        for ch in s:
            if ch not in mapp: stack.append(ch)
            elif stack and ch in mapp and stack[-1] == mapp[ch]: stack.pop()
            else: return False
        return len(stack) == 0
