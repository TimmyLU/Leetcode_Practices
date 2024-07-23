class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int sum = 0;
        for(int i = 0;i < nums.size();i++){
            sum = nums[i] * nums[i];
            ans.push_back(sum);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};