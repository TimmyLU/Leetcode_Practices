class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first_small = INT_MAX;
        int secend_small = INT_MAX;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] <= first_small){
                first_small = nums[i];
            }else if(nums[i] <= secend_small){
                secend_small = nums[i];
            }else if(nums[i] > secend_small){
                return true;
            }
        }
        return false;
    }
};