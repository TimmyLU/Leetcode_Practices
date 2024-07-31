class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> maxheap;
        for(auto num : nums){
            maxheap.push(num);
        }
        int first = maxheap.top();
        maxheap.pop();
        int sec = maxheap.top();
        return (first - 1) * (sec - 1);
    }
};