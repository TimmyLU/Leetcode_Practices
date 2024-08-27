class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int left = 0;
        int right = height.size() - 1;
        while(right > left){
            int area = (right - left) * min(height[left], height[right]);
            ans = max(ans, area);
            if(height[right] > height[left]){
                left++;
            }else{
                right--; // 如果左右相等也到else, 統一先right--;
            }
        }
        return ans;
    }
};
