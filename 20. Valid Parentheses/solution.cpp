class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        map<char, char> d;
        d = {{'}', '{'},{']','['},{')', '('}};
        for(auto x : s){
            if(stack.size() == 0 || d[x] != stack.back()){
                stack.push_back(x);
            }
            else if(d[x] == stack.back()){
                stack.pop_back();
            }
        }
        return stack.size() == 0;
    }
};
