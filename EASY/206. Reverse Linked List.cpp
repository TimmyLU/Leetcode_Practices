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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = nullptr;
        while(curr != nullptr){
            next = curr->next; // 保存當前節點的下一個節點
            curr->next = prev; // 反轉當前節點的指針
            prev = curr;       // 將prev移動到當前節點
            curr = next;       // 將curr移動到下一個節點
        }
        return prev;
    }
};