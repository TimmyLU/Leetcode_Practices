class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int left = 0;
        int right = 0;
        while(right < prices.size()){
            if(prices[right] > prices[left]){
                profit = max(profit, prices[right] - prices[left]);
            }
            else{
                left = right;
            }
            right++;
        }
        return profit;
    }
};