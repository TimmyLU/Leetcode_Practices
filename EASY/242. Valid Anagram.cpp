class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int>count;
        for(char a : s){
            count[a]++;
        }
        for(char a : t){
            count[a]--;
            if(count[a] < 0){
                return false;
            }
        }
        return true;
    }
};
