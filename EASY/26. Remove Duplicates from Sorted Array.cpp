class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int right = 1;
        while(right < nums.size()){
            if(nums[left] != nums[right]){
                left++;
                nums[left] = nums[right];
            }
            right++;
        }
        /*
        for(int right = 1;right < nums.size();right++){
            if(nums[left] != nums[right]){
                left++;
                nums[left] = nums[right];
            }
        }
        */
        return left + 1;
    }
};