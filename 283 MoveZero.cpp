#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        for(;left < n;left++){
            if(nums[left] != 0){
                nums[right] = nums[left];
                right ++;
            }
        }
        for(;right < n;right++){
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