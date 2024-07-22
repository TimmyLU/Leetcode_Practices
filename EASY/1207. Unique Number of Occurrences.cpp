class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>count;
        unordered_map<int, bool>seen;
        for(auto num : arr){
            count[num]++;
        }
        for(auto pair : count){
            if(seen[pair.second]){
                return false;
            }
            seen[pair.second] = true;
        }
        return true;
    }
};