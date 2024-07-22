class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> count;
        for(auto num : nums){
            count[num]++;
        }
        for (auto &pair : count){
            if(pair.second == 1){
                return pair.first;
            }
        }
        return 0;
    }
};