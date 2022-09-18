class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() <= 2) return 0;
        int l = 0, r = height.size() - 1;
        int lmax = height[l], rmax = height[r];
        int res = 0;
        while(l < r){
            if(lmax < height[l]){lmax = height[l];}
            if(rmax < height[r]){rmax = height[r];}
            
            if(lmax < rmax){
                res += lmax - height[l];
                l++;
            }
            else{
                res += rmax - height[r];
                r--;
            }
        }
        return res;
    }
};
