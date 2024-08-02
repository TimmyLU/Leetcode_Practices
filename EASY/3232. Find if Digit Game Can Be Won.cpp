class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int twice = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] >= 10){
                twice = twice + nums[i];
            }else{
                single = single + nums[i];
            }
        }
        return single == twice ? false : true;
    }
};