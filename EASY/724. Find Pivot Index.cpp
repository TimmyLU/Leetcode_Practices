class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        
        for(int i = 0;i < nums.size();i++){
            rightsum = sum - nums[i] - leftsum;
            if(leftsum == rightsum){
                return i;
            }
            leftsum = leftsum + nums[i];
        }
        return -1;
    }
};