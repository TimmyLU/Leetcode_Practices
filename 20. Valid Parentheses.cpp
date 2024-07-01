class Solution{
public:
bool isValid(string s){
    if (s.length() % 2 != 0) return false;
    unordered_map<char, char> bracketPairs ={
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    stack<char> stack;

    for (char ch : s){
        if (bracketPairs.count(ch)){
            if (stack.empty() || stack.top() != bracketPairs[ch]){
                return false;
            }
            stack.pop();
        }
        else{
            stack.push(ch);
        }
    }
    return stack.empty();
}
};