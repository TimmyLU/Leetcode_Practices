class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>cstack;
        string ans = "";
        for(int i = 0;i < s.length();i++){
            if(cstack.empty() || cstack.top() != s[i]){
                cstack.push(s[i]);
            }else{
                cstack.pop();
            }
        }
        while(!cstack.empty()){
            ans = cstack.top() + ans;
            cstack.pop();
        }
        return ans;
    }
};