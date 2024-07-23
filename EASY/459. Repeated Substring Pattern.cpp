class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubleS = s + s; // 合併
        string new_s = doubleS.substr(1, doubleS.size() - 2); // 2開始, 提取到size() - 2
        if(new_s.find(s) == string::npos){
            return false;
        }
        return true;
    }
};