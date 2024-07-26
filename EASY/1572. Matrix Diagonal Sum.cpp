class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int mid = (0 + mat.size() - 1) / 2;
        int len = mat.size();
        for(int i = 0;i < len;i++){
            sum = sum + mat[i][i];
        }
        for(int j = 0;j < len;j++){
            if(j != mid || len % 2 == 0){
                sum = sum + mat[j][len - 1 -j];
            }
        }
        return sum;
    }
};