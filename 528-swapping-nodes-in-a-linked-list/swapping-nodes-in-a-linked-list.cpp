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
    ListNode* getBackAddress(ListNode* head,int back){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        ListNode* temp = head;
        while (back--){
            temp = temp->next;
        }
        return temp;
    }
    ListNode* getFrontAddress(ListNode* head,int front){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        ListNode* temp = head;
        while (front--){
            temp = temp->next;
        }
        return temp;
    }
    int getSizeOfLinkedList(ListNode* head){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        ListNode* temp = head;
        int size = 0;
        while (temp){
            size++;
            temp = temp->next;
        }
        return size;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int size = getSizeOfLinkedList(head);
        int front = k - 1, back = size - k;
        ListNode* frontAddress = getFrontAddress(head,front);
        ListNode* backAddress = getBackAddress(head,back);
        int temp = frontAddress->val;
        frontAddress->val = backAddress->val;
        backAddress->val = temp;
        return head;
    }
};