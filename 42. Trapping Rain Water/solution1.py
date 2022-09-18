class Solution:
    def trap(self, height: List[int]) -> int:
        d = {}
        for i in range(len(height)):
            if height[i] not in d: d[height[i]] = []
            d[height[i]].append(i)
        res = 0
        h = sorted(list(d.keys()), reverse = True)
        if len(h) < 2 : return 0    
        for j in range(len(h) - 1):
            if len(d[h[j]]) < 2:
                d[h[j+1]] += d[h[j]]
            else:
                res += (max(d[h[j]]) - min(d[h[j]]) - (len(d[h[j]])-1))*(h[j] - h[j+1])
                d[h[j+1]] += d[h[j]]
        return res
