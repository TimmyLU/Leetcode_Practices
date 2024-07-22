/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool test(TreeNode *t1, TreeNode *t2){
        if(t1 == nullptr && t2 == nullptr){
            return true;
        }else if(t1 == nullptr || t2 == nullptr){
            return false;
        }
        return (t1->val == t2->val) && test(t1->right, t2->left) && test(t1->left, t2->right);
    }
    bool isSymmetric(TreeNode* root) {
        return test(root, root);
    }
};