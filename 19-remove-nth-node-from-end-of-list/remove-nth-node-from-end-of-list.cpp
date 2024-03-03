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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == NULL) return NULL;
        int len = 0;
        ListNode* it = head;
        while (it != NULL){
            len++;
            it = it->next;
        }
        int ind = len - n;
        if (len == n){
            head = head->next;
            return head;
        }
        int cnt = 0;
        ListNode* cur = head;
        ListNode* prev = head;
        while (cnt <= ind){
            cur = cur->next;
            cnt++;
            if (cnt==ind){
                prev->next = cur->next;
                break;
            }
            prev = prev->next;
        }
        return head;
    }
};