class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size() - 1;
        if(target >= letters[letters.size() - 1]){
            return letters[0];
        }
        while(left < right){
            int mid = (left + right) / 2;
            if(letters[mid] <= target){
                left = mid + 1;
            }else if(letters[mid] >= target){
                right = mid;
            }
        }
        return letters[left];
    }
};