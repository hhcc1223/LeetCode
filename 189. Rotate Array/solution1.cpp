class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        if(k != n && n != 0){
            k = k % n;
            for(int i = 0; i < nums.size(); i++){
                int src = i;
                int pre = nums[i];
                do{
                    int tar = (src + k) % n;
                    int next = nums[tar];
                    nums[tar] = pre;
                    src = tar;
                    pre = next;
                    cnt++;
                    
                }while(i!=src);
                if (cnt == n){break;}
            }         
        }
    }
};
