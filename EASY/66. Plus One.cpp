class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int right = digits.size() - 1;
        digits[right] = digits[right] + 1;
        for(int i = right;i >= 0;i--){
            if(digits[i] > 9){
                digits[i] = 0;
                if(i == 0){
                    digits.insert(digits.begin(), 1);
                }else{
                    digits[i - 1] = digits[i - 1] + 1;
                }
            }
        }
        return digits;
    }
};