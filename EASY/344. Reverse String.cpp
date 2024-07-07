class Solution { // reverse(s.begin(), s.end())
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        for(;left < right;left++, right--){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
        }
    }
};
