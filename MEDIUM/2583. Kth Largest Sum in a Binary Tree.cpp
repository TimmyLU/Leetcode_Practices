class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> que;
        priority_queue<long long, vector<long long>, greater<long long>> minheap;
        //if(root != nullptr) que.push(root);
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            long long sum = 0;
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
            minheap.push(sum);
            if(minheap.size() > k){
                minheap.pop();
            }
        }
        if(minheap.size() < k){
            return -1;
        }
        return minheap.top();
    }
};