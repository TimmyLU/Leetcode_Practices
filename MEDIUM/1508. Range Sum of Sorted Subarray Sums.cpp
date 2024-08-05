class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        // minheap
        //priority_queue<long long, vector<long long>, greater<long long>>minHeap;
        // vector
        vector<long long>sums;
        for(int i = 0;i < nums.size();i++){
            long long sum = 0;
            for(int j = i;j < nums.size();j++){
                sum = sum + nums[j];
                sums.push_back(sum);
                //minheap.push(sum);
            }
        }
        // 使用vector
        sort(sums.begin(), sums.end());
        long long ans = 0;
        for(int k = left - 1;k < right;k++){
            ans = ans + sums[k];
        }
        ans = ans % 1000000007;
        return ans;
        
        // 使用 minheap
        //long long ans = 0;

    }
};