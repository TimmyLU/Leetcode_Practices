class Solution {
public:
    int height(TreeNode* node){
        if(node == nullptr){
            return 0;
        }
        int left = height(node->left);
        if(left == -1){
            return -1;
        }
        int right = height(node->right);
        if(right == -1){
            return -1;
        }
        return abs(left - right) > 1 ? -1 : 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        return height(root) == -1 ? false : true;
    }
};