class Solution {
public:
    bool dfs(TreeNode *node, unordered_set<int> &countnum, int k){
        if(node == nullptr){
            return false;
        }
        if(countnum.count(k - node->val)){
            return true;
        }
        countnum.insert(node->val);
        return dfs(node->left, countnum, k) || dfs(node->right, countnum, k);
    }
    
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>countnum;
        return dfs(root, countnum, k);
    }
};