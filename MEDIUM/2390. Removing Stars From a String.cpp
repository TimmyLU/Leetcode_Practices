class Solution {
public:
    string removeStars(string s) {
        //stack<char> cstack;
        //string ans;
        vector<char> cvec;
        for(int i = 0;i < s.size();i++){
            if(isalpha(s[i])){
                cvec.push_back(s[i]);
            }else{
                cvec.pop_back();
            }
        }
        /*
        while(!cstack.empty()){
            ans = cstack.top() + ans;
            cstack.pop();
        }
        */
        return string(cvec.begin(), cvec.end());
    }
};