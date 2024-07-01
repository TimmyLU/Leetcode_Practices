#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class Solution{
public:
    void postorderTraversal(TreeNode* root, vector<int>& result){
        if (root == NULL) return;
        postorderTraversal(root->left, result);
        postorderTraversal(root->right, result);
        result.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root){
        vector<int> result;
        postorderTraversal(root, result);
        return result;
    }
};

int main(){
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    
    Solution sol;
    vector<int> result = sol.postorderTraversal(root);

    for (int val : result){
        cout << val << " ";
    }
    return 0;
}