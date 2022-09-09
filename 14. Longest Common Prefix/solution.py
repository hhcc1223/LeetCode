class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if "" in strs or len(strs) == 0:
            return ""
        else:
            ans = ""
            for i in range(len(strs[0])):
                flag = 1
                for string in strs:
                    if len(string) <= i:
                        flag = 0
                        break
                    else:
                        if strs[0][i] == string[i]:
                            continue
                        else:
                            flag = 0
                            break
                if flag:
                    ans += strs[0][i]
                else:
                    break
            return ans
