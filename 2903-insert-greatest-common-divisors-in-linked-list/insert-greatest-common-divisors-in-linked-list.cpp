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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == NULL){
            return head;
        }
        ListNode* it = head;
        while (it->next != NULL){
            int a = it->val;
            int b = it->next->val;
            int val = __gcd(a,b);
            ListNode* jyo = new ListNode(val);
            jyo->next = it->next;
            it->next = jyo;
            it = it->next->next;
        }
        return head;
    }
};