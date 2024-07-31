class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>count;
        vector<vector<string>>ans;
        for(auto str : strs){
            string sortstr = str;
            sort(sortstr.begin(), sortstr.end());
            count[sortstr].push_back(str);
        }
        for(auto pair : count){
            ans.push_back(pair.second);
        }
        return ans;
    }
};