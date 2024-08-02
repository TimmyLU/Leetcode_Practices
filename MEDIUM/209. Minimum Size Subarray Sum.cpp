class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int min_len = INT_MAX; //整數型態最大的值
        for(int right = 0;right < nums.size();right++){
            sum = sum + nums[right]; // 累加
            // 累加超過或是等於target
            while(sum >= target){
                min_len = min(min_len, (right - left) + 1); //取最小長度
                sum = sum - nums[left]; //delete左端最後一個
                left++;
            }
        }
        // min_len == INT_MAX 的話 整個vector相加都不會是target
        return min_len == INT_MAX ? 0 : min_len;
    }
};