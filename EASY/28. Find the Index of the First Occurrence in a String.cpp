class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = INT_MAX;
        int left = 0;
        int len2 = needle.length();
        for(int right = len2 - 1;right < haystack.length();right++){
            string temp = haystack.substr(left, len2);
            if(temp == needle){
                ans = min(ans, left);
            }
            left++;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};