class Solution {
public:
    string decodeString(string s) {
        stack<int> intstack;
        stack<string> strstack;
        string num = "";
        string str = "";

        for(char c : s){
            if(isdigit(c)){
                num = num + c;
            }else if(c == '['){
                intstack.push(stoi(num));
                strstack.push(str);
                num = "";
                str = "";
            }else if(c == ']'){
                int times = intstack.top();
                intstack.pop();
                
                string temp = str;
                str = strstack.top();
                strstack.pop();

                for(int i = 0;i < times;i++){
                    str = str + temp;
                }
            }else{
                str = str + c;
            }
        }
        return str;
    }
};