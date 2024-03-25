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
typedef ListNode Node;
    int pairSum(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (head->next->next == NULL){
            int val = head->val + head->next->val;
            return val;
        }
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;
        while (fast){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* trav = prev;
        prev = NULL;
        while (slow){
            Node* nxt = slow->next;
            slow->next = prev;
            prev = slow;
            if (nxt == NULL){
                trav->next = slow;
            }
            slow = nxt;
        }
        int res = 0;
        Node* i = head;
        Node* j = trav->next;
        while (j){
            int val = i->val + j->val;
            if (res < val){
                res = val;
            }
            i = i->next;
            j = j->next;
        }
        return res;
    }
};