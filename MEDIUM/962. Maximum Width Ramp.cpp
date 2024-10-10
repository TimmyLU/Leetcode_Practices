class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int ans = 0;
        stack<int> istack;
        for(int i = 0;i < nums.size();i++){
            if(istack.empty() || nums[i] < nums[istack.top()]){
                istack.push(i);
            }
        }
        for(int i = nums.size() - 1;i >= 0;i--){
            while (!istack.empty() && nums[i] >= nums[istack.top()]) {
                ans = max(ans, i - istack.top());
                istack.pop();
            }
        }
        return ans;
    }
};