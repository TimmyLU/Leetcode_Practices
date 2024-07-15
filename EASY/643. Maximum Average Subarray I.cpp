class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0, sum = 0;
        for(int i = 0;i < k;i++){
            sum = sum + nums[i];
        }
        ans = sum;
        for(int j = k;j < nums.size();j++){
            sum = sum + nums[j] - nums[j - k];
            ans = max(ans, sum);
        }
        return ans / k;
    }
};