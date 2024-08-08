class Solution {
public:
    string numberToWords(int num) {
        string ans = "";
        int i = 0;
        if(num == 0){
            return "Zero";
        }
        while(num > 0){
            if(num % 1000 != 0){
                ans = count_numbers(num % 1000) + thousands[i] + " " + ans;
            }
            i++;
            num = num / 1000;
        }
        while(ans.back() == ' '){
            ans.pop_back();
        }
        return ans;
    }
    vector<string> under_20 = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", 
    "Eleven", "Twelve", "Thirteen", "Fourteen",  "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    vector<string> thousands = {"", "Thousand", "Million", "Billion"};
    string count_numbers(int num){
        if(num == 0){
            return "";
        }else if(num < 20){
            return under_20[num] + " ";
        }else if(num < 100){
            return tens[num / 10] + " " + count_numbers(num % 10);
        }else{
            return under_20[num / 100] + " Hundred " + count_numbers(num % 100);
        }
    }
};