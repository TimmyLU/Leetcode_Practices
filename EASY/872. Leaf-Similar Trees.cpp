class Solution {
public:
    void getleaves(TreeNode *root, vector<int> &leaves){
        if(root == nullptr){
            return;
        }
        if(root->left == nullptr && root->right == nullptr){
            leaves.push_back(root->val);
        }
        getleaves(root->left, leaves);
        getleaves(root->right, leaves);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaves1;
        vector<int>leaves2;
        getleaves(root1, leaves1);
        getleaves(root2, leaves2);
        return leaves1 == leaves2;
    }
};