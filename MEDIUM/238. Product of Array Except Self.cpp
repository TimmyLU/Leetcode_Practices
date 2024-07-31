class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int>ans(len, 1);
        int left = 1;
        int right = 1;
        for(int i = 0;i < len;i++){
            ans[i] = ans[i] * left;
            left = left * nums[i];
        }
        for(int i = len - 1; i >= 0; --i){
            ans[i] = ans[i] * right;
            right = right * nums[i];
        }
        return ans;
    }
};