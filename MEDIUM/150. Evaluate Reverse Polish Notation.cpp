class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> istack;
        for(auto token : tokens){
            if(token == "+"){
                int a = istack.top();
                istack.pop();
                int b = istack.top();
                istack.pop();
                istack.push(a + b);
            }else if(token == "-"){
                int a = istack.top();
                istack.pop();
                int b = istack.top();
                istack.pop();
                istack.push(b - a);
            }else if(token == "*"){
                int a = istack.top();
                istack.pop();
                int b = istack.top();
                istack.pop();
                istack.push(a * b);
            }else if(token == "/"){
                int a = istack.top();
                istack.pop();
                int b = istack.top();
                istack.pop();
                istack.push(b / a);
            }else{
                istack.push(stoi(token));
            }
        }
        return istack.top();
    }
};