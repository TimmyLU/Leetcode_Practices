class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> nums;
        for(int i = n;i >= 0;i--){
            int count = 0;
            int num = i;
            while(num != 0){
                num = num & (num - 1);
                count++;
            }
            nums.push_back(count);
        }
        reverse(nums.begin(), nums.end());
        return nums;
    }
};