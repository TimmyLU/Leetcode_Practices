class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int one_sum = 0;
        //計算one總數
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 1){
                one_sum++;
            }
        }
        //特例 全都是one 或是 沒有one
        if(one_sum == nums.size() - 1 || one_sum == 0){
            return 0;
        }
        //複製
        vector<int>num(nums.begin(), nums.end());
        num.insert(num.end(), nums.begin(), nums.end());

        //最一開始window中的one
        int window_one = 0;
        for(int i = 0;i < one_sum;i++){
            if(num[i] == 1){
                window_one++;
            }
        }
        //Sliding Window
        //one_sum - window_one = 一個window中0出現的次數 = 要swap的次數
        int minswap = one_sum - window_one;
        for(int i = one_sum;i < num.size();i++){
            //add
            if(num[i] == 1){
                window_one++;
            }
            //delete
            if(num[i - one_sum] == 1){
                window_one--;
            }
            //取最小
            minswap = min(minswap, one_sum - window_one);
        }
        return minswap;
    }
};