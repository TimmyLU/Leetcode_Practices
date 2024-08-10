class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0;
        int right_end = matrix[0].size() - 1;
        int top = 0;
        int down_end = matrix.size() - 1;
        vector<int>ans;
        while(left <= right_end && top <= down_end){
            for(int i = left;i <= right_end;i++){
                ans.push_back(matrix[top][i]);
            }//123 //5
            top++;
            for(int i = top;i <= down_end;i++){
                ans.push_back(matrix[i][right_end]);
            }//69
            right_end--;
            if(top <= down_end){
                for(int i = right_end;i >= left;i--){
                    ans.push_back(matrix[down_end][i]);
                }
                down_end--;
            }//87
            if(left <= right_end){
                for(int i = down_end;i >= top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }//4
        }
        return ans;
    }
};