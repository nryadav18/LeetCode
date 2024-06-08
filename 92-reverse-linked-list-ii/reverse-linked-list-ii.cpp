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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (head->next == NULL or left == right) {
            return head;
        }
        ListNode* temp = head, *start = NULL;
        while (temp != NULL and left-- > 1 and right-- > 1){
            start = temp;
            temp = temp->next;
        }
        ListNode* prev = NULL, *cur = temp, *next = NULL;
        while (cur != NULL and right--){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        if (start != NULL){
            start->next = prev;
        }
        else{
            head = prev;
        }
        if (temp != NULL){
            temp->next = cur;
        }
        return head;
    }
};