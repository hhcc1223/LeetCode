class Solution {
public:
    int climbStairs(int n) {
        unsigned int a = 0, b = 1;
        for(int k = 0; k <= n; k++){
            unsigned int temp = 0;
            temp = b;
            b = a+b;
            a = temp;
        }
        return a;
    }
};
