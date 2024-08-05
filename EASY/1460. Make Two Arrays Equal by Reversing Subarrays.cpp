class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int>target_count;
        unordered_map<int, int>arr_count;
        for(int num : target){
            target_count[num]++;
        }
        for(int nums : arr){
            arr_count[nums]++;
        }
        return target_count == arr_count;
    }
};