class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int current = nums[0];
        for(int i = 1;i < nums.size();i++){
            current = max(nums[i], current + nums[i]);
            max_sum = max(current, max_sum);
        }
        return max_sum;
    }
};