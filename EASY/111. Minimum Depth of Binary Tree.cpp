class Solution {
public:
    int getdepth(TreeNode* node){
        if(node == nullptr) return 0;
        int left = getdepth(node->left);
        int right = getdepth(node->right);
        if(node->right == nullptr && node->left != nullptr){
            return left + 1;
        }
        if(node->right != nullptr && node->left == nullptr){
            return right + 1;
        }
        int ans = min(right, left) + 1;
        return ans;
    }
    int minDepth(TreeNode* root) {
        return getdepth(root);
    }
};