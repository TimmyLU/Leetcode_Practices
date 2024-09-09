class Solution {
public:
    void traversal(TreeNode *cur, vector<int> &path, vector<string> &result){
        path.push_back(cur->val);
        if(cur->left == nullptr && cur->right == nullptr){
            string spath;
            for(int i = 0;i < path.size() - 1;i++){
                spath += to_string(path[i]);
                spath += "->";
            }
            spath += to_string(path[path.size() - 1]);
            result.push_back(spath);
            return ;
        }
        if(cur->left){
            traversal(cur->left, path, result);
            path.pop_back();
        }
        if(cur->right){
            traversal(cur->right, path, result);
            path.pop_back();
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        vector<int> path;
        if(root == nullptr){
            return result;
        }
        traversal(root, path, result);
        return result;
    }
};