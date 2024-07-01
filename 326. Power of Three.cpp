#include <iostream>

using namespace std;

bool isPowerOfThree(int n) {
    return n > 0 && 1162261467 % n == 0; //1162261467 = 3^19 ---> int範圍中最大的3^n次方
}

int main() {
    int n;
    cin >> n;
    cout << (isPowerOfThree(n) ? "yes" : "no");
    return 0;
}
