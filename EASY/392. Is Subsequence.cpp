class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen = s.length();
        int sindex = 0;

        int tlen = t.length();
        int tindex = 0;
        while(sindex < slen && tindex < tlen){
            if(s[sindex] == t[tindex]){
                sindex++;
                //tindex++;
            }
            tindex++;
        }
        return (sindex == slen)? true : false;
    }
};