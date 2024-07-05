class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        stringstream ss(s);
        string word;

        while(ss >> word){
            words.push(word);
        }
        s.clear();

        while(!words.empty()){
            s = s + words.top();
            words.pop();
            if(!words.empty()){
                s = s + " ";
            }
        }
        return s;
    }
};