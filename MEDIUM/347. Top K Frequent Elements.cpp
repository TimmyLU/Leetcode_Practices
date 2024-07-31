class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int len = nums.size();
        unordered_map<int, int> count;
        vector<vector<int>> bucket(len + 1);
        vector<int> ans;
        for(int num : nums){
            count[num]++;
        }
        for(auto pair : count){
            bucket[pair.second].push_back(pair.first);
        }
        for(int i = len;i >= 0;i--){
            for(int num : bucket[i]){
                if(ans.size() == k){
                    break;
                }
                ans.push_back(num);
            }
        }
        return ans;
    }
};
/*
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    unordered_map = {{1, 3}, {2, 2}, {3, 1}};
                    second為數字出現次數, 當作bucket的索引
                    first為數字, push到bucket中
    bucket = { {}, {3}, {2}, {1}, {}, {}, {} };
                0   1    2    3    4   5   6
    從最後往回找並push到ans中, 直到ans.size() = k
*/