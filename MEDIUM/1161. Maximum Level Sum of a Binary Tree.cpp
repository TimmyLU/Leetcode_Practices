class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> que;
        int maxsum = INT_MIN;
        int maxlevel = 0;
        int level = 0;
        if(root != nullptr){
            que.push(root);
        }
        while(!que.empty()){
            int size = que.size();
            int sum = 0;
            level++;
            for(int i = 0;i < size;i++){
                TreeNode* node = que.front();
                que.pop();
                sum += node->val;
                if(node->left){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }
            }
            if(sum > maxsum){
                maxsum = sum;
                maxlevel = level;
            }
        }
        return maxlevel;
    }
};