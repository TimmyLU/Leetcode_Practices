class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        int leftdep = 0;
        int rightdep = 0;
        while(left){
            left = left->left;
            leftdep++;
        }
        while(right){
            right = right->right;
            rightdep++;
        }
        if(leftdep == rightdep){
            return (2 << leftdep) - 1;
        }
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};