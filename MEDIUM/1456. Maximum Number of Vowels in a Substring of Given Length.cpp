class Solution {
public:
    bool isvowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int sum_count = 0;
        int first_count = 0;
        for(int i = 0;i < k;i++){
            if(isvowel(s[i])){
                first_count++;
            }
        }
        sum_count = first_count;
        for(int i = k;i < s.length();i++){
            if(isvowel(s[i])){
                first_count++;
            }
            if(isvowel(s[i - k])){
                first_count--;
            }
            sum_count = max(sum_count, first_count);
        }
        return sum_count;
    }
};