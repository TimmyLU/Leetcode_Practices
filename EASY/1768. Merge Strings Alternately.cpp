class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int len1 = word1.length();
        int len2 = word2.length();
        int maxlen = max(len1, len2);
        for(int i = 0;i < maxlen;i++){
            if(i < len1){
                ans = ans + word1[i];
            }
            if(i < len2){
                ans = ans + word2[i];
            }
        }
        return ans;
    }
};