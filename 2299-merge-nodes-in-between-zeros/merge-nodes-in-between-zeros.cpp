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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* prev = head;
        ListNode* cur = head->next;
        while (cur!=NULL){
            if (prev->val == 0){
                while (cur->val != 0){
                    prev->val += cur->val;
                    prev->next = cur->next;
                    cur = cur->next;
                }
            }
            if (cur->next == NULL){
                prev->next = NULL;
            }
            else{
                prev = prev->next;
            }
            cur = cur->next;
        }
        
        return head;
    }
};