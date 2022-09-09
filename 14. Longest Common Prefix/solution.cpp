class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int i = 0, flag = 1;
        while(flag){
           for(int j = 0; j < strs.size(); j++){
               if(i >= strs[j].size() || strs[j][i] != strs[0][i]){
                   flag = 0;
                   break;}}
           i++;}
        string res = strs[0].substr(0, i-1);
        return res;
    }
};
