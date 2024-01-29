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
        if (head == NULL or head->next == NULL){
            return head;
        }
        ListNode* it = head;
        while (it->next != NULL and it != NULL){
            int temp = it->val;
            it->val = it->next->val;
            it->next->val = temp;
            if (it->next->next != NULL){
                it = it->next->next;
            }
            else{
                it = it->next;
            }
        }
        return head;
    }
};