class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<int>num;
        ListNode *cur = head;
        while(cur != nullptr){
            num.push_back(cur->val);
            cur = cur->next;
        }
        int mid = num.size() / 2;
        cur = head;
        for(int i = 0;i < mid;i++){
            cur = cur->next;
        }
        return cur;
    }
};