class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int>count;
        vector<string>ans;
        for(auto arrs : arr){
            count[arrs]++;
        }
        for(auto arrs : arr){
            if(count[arrs] == 1){
                ans.push_back(arrs);
            }
        }
        if(k <= ans.size()){
            return ans[k - 1];
        }
        return "";
    }
};