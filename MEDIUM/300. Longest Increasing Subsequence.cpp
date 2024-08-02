class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(), 1); // 大小為num.size()且初始化內容都為1
        //int max_len = 1;
        for(int i = 0;i < nums.size();i++){
            for(int j = 0;j < i;j++){
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            //max_len = max(max_len, dp[i]);
        }
        //return max_len;
        return *max_element(dp.begin(), dp.end());
    }
};