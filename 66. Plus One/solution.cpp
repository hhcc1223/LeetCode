class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0, nLen = digits.size() - 1;
        while(nLen >= 0){
            if(nLen == digits.size() - 1){
                if(digits[nLen] + 1 >= 10){
                    carry = 1;
                }
                digits[nLen] =  (digits[nLen] + 1) % 10;
            }
            else if(digits[nLen] + carry >= 10){
                digits[nLen] = (digits[nLen] + carry) % 10;
                carry = 1;
            }
            else{
                digits[nLen] = (digits[nLen] + carry) % 10;
                carry = 0;
            }
            nLen --;
        }
        if(carry){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
