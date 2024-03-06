/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head==NULL or head->next==NULL){
            return false;
        }
        while (1){
            if (head->val == INT_MAX){
                return true;
            }
            if (head==NULL or head->next==NULL){
                return false;
            }
            head->val = INT_MAX;
            head = head->next;
        }
        return false;
    }
};