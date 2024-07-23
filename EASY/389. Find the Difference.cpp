class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int>count;
        //for(int i = 0; i < s.size();i++)
        for(auto num : s){
            count[num]++;
        }
        for(auto num : t){
            count[num]--;
            //for(int i = 0; i < t.size();i++)
            if(count[num] < 0){
                return num;
            }
        }
        return 0;
    }
};