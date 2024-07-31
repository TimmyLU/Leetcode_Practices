class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<int>ans;
        for(int i = 0;i < nums.size();i++){
            rightsum = sum - nums[i] - leftsum;
            //left = sum - right - nums[i];
            ans.push_back(abs(leftsum - rightsum));
            leftsum += nums[i];
        }
        return ans;
    }
};