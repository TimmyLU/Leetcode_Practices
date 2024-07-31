class Solution {
public:
    int cal(int n){
        int sum = 0;
        while(n > 0){
            int temp = n % 10;
            n = n / 10;
            sum = sum + (temp * temp);
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n != 1 && seen.find(n) == seen.end()){
            seen.insert(n);
            n = cal(n);
        }
        return n == 1;
    }
};