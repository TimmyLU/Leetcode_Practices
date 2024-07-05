class Solution {
public:
    bool isPowerOfTwo(int num) {
        return num > 0 && (num & (num - 1)) == 0; //小陷阱 先判斷是否為負數
    }
};
