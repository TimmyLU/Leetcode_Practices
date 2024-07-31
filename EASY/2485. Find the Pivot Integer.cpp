class Solution {
public:
    int pivotInteger(int n) {
        int leftsum = 0;
        int rightsum = 0;
        int sum = ((n + 1) * n)/ 2;
        for(int i = 1;i <= n;i++){
            rightsum = sum - i - leftsum;
            if(rightsum == leftsum){
                return i;
            }
            leftsum = leftsum + i;
        }
        return -1;
    }
};