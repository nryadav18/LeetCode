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
    ListNode* deleteMiddle(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (head->next == NULL) return nullptr;
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;
        while (fast != NULL and fast->next!= NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        delete slow;
        return head;
    }
};