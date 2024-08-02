class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int>ans(len); //建一個大小為len的vector
        /* 比較直觀 但會TLE
        while(k > 0){
            int right = nums[len - 1]; // 末尾的數字 每次rotate都會把末尾抓去前面
            for(int i = len - 1;i > 0;i--){
                nums[i] = nums[i - 1];// 把前面的數字蓋回去後面一個
            }
            nums[0] = right;
            k--; //遞減次數
        }
        */
        //有點難想到
        for(int i = 0;i < len;i++){
            ans[(i + k) % len] = nums[i]; //ans相對應的位置改成nums[i] 剛好會是i + k , 遇到 i + k 超過len就 % len
        }
        nums = ans; //複製過去
    }
};