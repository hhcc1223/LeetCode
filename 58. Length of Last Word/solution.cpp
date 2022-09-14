class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0, i = s.length() - 1;
        bool start = false;
        while(i >= 0){
            if(s[i] != ' '){
                start = true;
                res ++;
            }
            else if(s[i] == ' ' && start){
                break;
            }
            i--;
        }
        return res;
    }
};
