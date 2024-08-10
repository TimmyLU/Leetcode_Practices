class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>count1;
        unordered_map<int, int>count2;
        vector<int>ans1;
        vector<int>ans2;
        for(int num : nums1){
            count1[num]++;
        }
        for(int num : nums2){
            count2[num]++;
        }
        for(auto pair : count1){
            if(count2.find(pair.first) == count2.end()){
                ans1.push_back(pair.first);
            }
        }
        for(auto pair : count2){
            if(count1.find(pair.first) == count1.end()){
                ans2.push_back(pair.first);
            }
        }
        return {ans1, ans2};
    }
};