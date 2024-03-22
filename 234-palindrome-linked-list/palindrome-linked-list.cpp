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
    bool isPalindrome(ListNode* head) {
        Node* raj = head;
        Node* jyo = head;
        Node* prev = NULL;
        while (raj != NULL and raj->next != NULL){
            raj = raj->next->next;
            jyo = jyo->next;
        }
        while (jyo){
            Node* next = jyo->next;
            jyo->next = prev;
            prev = jyo;
            jyo = next;
        }
        while (prev != NULL){
            if (prev->val != head->val) return 0;
            prev = prev->next;
            head = head->next;
        }
        return 1;
    }
};