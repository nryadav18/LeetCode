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
    ListNode *detectCycle(ListNode *head) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (head==NULL or head->next==NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while (1){
            if (slow == NULL or slow->next == NULL) return NULL;
            else if (fast == NULL or fast->next == NULL) return NULL;
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }
        while (slow != head){
            slow = slow->next;
            head = head->next;
        }
        return head;
    }
};