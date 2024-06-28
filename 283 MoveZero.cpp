#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0; // 想成 pointers
        int right = 0;
        int n = nums.size(); // 抓長度
        for(;left < n;left++){ //從頭掃到尾
            if(nums[left] != 0){ // 非0 = 左=右----> 右++ // (0, 1, 0, 3, 12) -----> (1, 1, 0, 3, 12)
                nums[right] = nums[left];
                right ++;
            }
        }
        for(;right < n;right++){ // 跑一輪 非0都貼到左邊 -----> 把剩的改0
            nums[right] = 0;
        }
    }
};

int main(){
	vector <int> nums = {0, 1, 0, 3, 12};
	moveZeros(nums);
	for(int num : nums){
		cout << num << " ";
	}
	cout << endl;
	return 0;
}
