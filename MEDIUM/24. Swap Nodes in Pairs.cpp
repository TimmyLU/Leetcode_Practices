/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *virtualnode = new ListNode(0);
        virtualnode->next = head;
        ListNode *cur = virtualnode;
        while(cur->next != nullptr && cur->next->next != nullptr){
            ListNode *temp1 = cur->next;
            ListNode *temp2 = cur->next->next->next;

            cur->next = cur->next->next;
            cur->next->next = temp1;
            cur->next->next->next = temp2;
            
            cur = cur->next->next;
        }
        ListNode *ans = virtualnode->next;
        return ans;
    }
};