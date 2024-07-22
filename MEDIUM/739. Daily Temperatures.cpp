class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int nums = temperatures.size();
        vector<int> ans(nums, 0);
        stack<int> day;
        for(int i = 0;i < nums;i++){
            while(!day.empty() && temperatures[i] > temperatures[day.top()]){
                int index = day.top();
                day.pop();
                ans[index] = i - index;
            }
            day.push(i);
        }
        return ans;
    }
};