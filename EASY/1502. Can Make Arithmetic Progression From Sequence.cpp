class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int len = arr.size();
        int gap = arr[1] - arr[0];
        if(arr.size() <= 2){
            return true;
        }
        for(int i = 1;i < len;i++){
            if(arr[i] - arr[i - 1] != gap){
                return false;
            }
        }
        return true;
    }
};