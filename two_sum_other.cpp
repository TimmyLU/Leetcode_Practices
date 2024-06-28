#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    for (int i = 0; i < nums.size();i++){
        for (int j = i + 1; j < nums.size();j++){
            if (nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2, 11, 7, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if (result.size() == 2){
        cout << "Indices of the two numbers that add up to target (" << target << "): " << result[0] << " and " << result[1] << endl;
    } else{
        cout << "No valid solution found." << endl;
    }
    return 0;
}