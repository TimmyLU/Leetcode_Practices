class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int i = 0;i < bills.size();i++){
            if(bills[i] == 5){
                five++;
            }else if(bills[i] == 10){
                if(five > 0){
                    five--;
                    ten++;
                }else{
                    return false;
                }
            }else if(bills[i] == 20){ //10 + 5 or 5 + 5 + 5
                if(ten > 0 && five > 0){
                    ten--;
                    five--;
                }else if(five >= 3){
                    five = five - 3;
                }else{
                    return false;
                }
            }
        }   
        return true;
    }
};