class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>count(nums1.begin(), nums1.end());
        unordered_set<int>ans;
        for(auto num : nums2){
            if(count.find(num) != count.end()){
                ans.insert(num);
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};