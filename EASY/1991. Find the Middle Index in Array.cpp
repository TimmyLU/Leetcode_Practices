class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int leftsum = 0;
        int rightsum = 0;
        for(int i = 0;i < nums.size();i++){
            rightsum = sum - leftsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum = leftsum + nums[i];
        }
        return -1;
    }
};