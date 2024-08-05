class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>charcount;
        int left = 0;
        //int right = 0;
        int longs = 0;
        for(int right = 0;right < s.length();right++){
            while(charcount.find(s[right]) != charcount.end()){
                charcount.erase(s[left]);
                left++;
            }
            charcount.insert(s[right]);
            longs = max(longs, right - left + 1);
        }
        return longs;
    }
};