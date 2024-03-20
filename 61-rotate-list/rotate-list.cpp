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
    ListNode* rotateRight(ListNode* head, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if (head == NULL or head->next == NULL or k==0) return head;
        int size = 0;
        Node* temp = head;
        while (temp != NULL){
            temp = temp->next;
            size++;
        }
        if (k >= size){
            k %= size;
        }
        if (k == size or k==0){
            return head;
        }
        int cnt = 1;
        temp = head;
        while (cnt != size-k){
            temp = temp->next;
            cnt++;
        }
        Node* mainHead = temp->next;
        temp->next = NULL;
        temp = mainHead;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = head;
        return mainHead;
    }
};