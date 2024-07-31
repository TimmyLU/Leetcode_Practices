class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int ans = 0;
        for (auto num : nums){
            //int num = nums[i];
            if(numset.find(num - 1) == numset.end()){
                int target = num;
                int len = 1;
                while(numset.find(target + 1) != numset.end()){
                    target++;
                    len++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};