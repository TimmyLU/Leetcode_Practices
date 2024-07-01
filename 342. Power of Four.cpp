#include <iostream>
using namespace std;

class Solution{
public:
    bool isPowerOfFour(int num){
        while (num && (num % 4 == 0)){
            num = num / 4;
        }
        return num == 1;
    }
};

int main(){
    Solution solution;
    int test_num = 16; // input
    if (solution.isPowerOfFour(test_num)) {
        cout << test_num << " is a power of four." << endl;
    } else {
        cout << test_num << " is not a power of four." << endl;
    }
    return 0;
}
