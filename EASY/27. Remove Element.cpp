class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int point1 = 0;
        for(int point2 = 0;point2 < nums.size();point2++){
            if(val != nums[point2]){
                nums[point1] = nums[point2];
                point1++;
            }
        }
        return point1;
    }
};