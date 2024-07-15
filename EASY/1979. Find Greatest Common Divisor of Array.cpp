class Solution {
public:
    int gcd(int a, int b){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        //auto mins = min_element(nums.begin(), nums.end());
        //auto maxs = max_element(nums.begin(), nums.end());
        //return gcd(*mins, *maxs);
        int mins = nums[0];
        int maxs = nums[0];
        for(int i = 0;i < nums.size();i++){
            if(nums[i] < mins){
                mins = nums[i];
            }
            if(nums[i] > maxs){
                maxs = nums[i];
            }
        }
        return gcd(mins, maxs);
    }
};