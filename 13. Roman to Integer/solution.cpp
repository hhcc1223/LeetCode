class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        
        map<char, int> d;
        d = {{'I', 1}, {'V', 5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
        
        int i = 0;
        while(i < s.size()){
            if((i != s.size() - 1) && (d[s[i]] < d[s[i+1]])){
                res += d[s[i+1]] - d[s[i]];
                i += 2;
            }
            else{res += d[s[i]];
                i ++;}
        }
        return res;
    }
};
