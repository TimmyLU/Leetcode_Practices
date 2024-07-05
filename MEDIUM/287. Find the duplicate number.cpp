class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> see;
        for(int a : nums){
            if(see.find(a) != see.end(a)){
                return a;
            }
            see.insert(a);
        }
        return 0;
    }
};