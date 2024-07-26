class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> istack;
        int ans = 0;
        for(int i = 0;i < operations.size();i++){
            string &nums = operations[i];
            if(nums == "C"){
                if(!istack.empty()){
                    istack.pop();
                }
            }else if(nums == "D"){
                if(!istack.empty()){
                    int temp = istack.top();
                    istack.push(temp * 2);
                }
            }else if(nums == "+"){
                if(istack.size() >= 2){
                    int a = istack.top();
                    istack.pop();
                    int b = istack.top();
                    int sum = a + b;
                    istack.push(a);
                    istack.push(sum);
                }
            }else{
                istack.push(stoi(nums));
            }
        }
        while(!istack.empty()){
            ans += istack.top();
            istack.pop();
        }
        return ans;
    }
};