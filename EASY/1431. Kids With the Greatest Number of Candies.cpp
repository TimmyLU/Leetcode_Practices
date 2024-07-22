class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int nums = candies.size();
        auto max_hold = *max_element(candies.begin(), candies.end());
        vector<bool> ans;
        for(int i = 0;i < nums;i++){
            if(candies[i] + extraCandies >= max_hold){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};