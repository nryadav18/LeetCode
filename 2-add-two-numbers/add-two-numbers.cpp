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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1 = 0;
        int len2 = 0;
        ListNode* it1 = l1;
        ListNode* it2 = l2;
        while (it1 != NULL){
            len1++;
            it1 = it1->next;
        }
        while (it2 != NULL){
            len2++;
            it2 = it2->next;
        }
        ListNode* A = l1;
        ListNode* B = l2;
        if (len1 > len2){
            int carry = 0;
            while (B != NULL){
                int sum = carry+A->val+B->val;
                carry = sum / 10;
                sum = sum % 10;
                A->val = sum;
                A = A->next;
                B = B->next;
            }
            ListNode* car;
            while (A!=NULL){
                int sum = carry+A->val;
                carry = sum / 10;
                sum = sum % 10;
                A->val = sum;
                if (A->next==NULL){
                    car = A;
                }
                A = A->next;
            }
            if (carry){
                ListNode* nn = new ListNode(carry);
                car->next = nn;
            }
            return l1;
        }
        else if (len1 < len2){
            int carry = 0;
            while (A != NULL){
                int sum = carry+A->val+B->val;
                carry = sum / 10;
                sum = sum % 10;
                B->val = sum;
                A = A->next;
                B = B->next;
            }
            ListNode* car;
            while (B!=NULL){
                int sum = carry+B->val;
                carry = sum / 10;
                sum = sum % 10;
                B->val = sum;
                if (B->next==NULL){
                    car = B;
                }
                B = B->next;
            }
            if (carry){
                ListNode* nn = new ListNode(carry);
                car->next = nn;
            }
            return l2;
        }
        else{
            int carry = 0;
            ListNode* car;
            while (A != NULL){
                int sum = carry+A->val+B->val;
                carry = sum / 10;
                sum = sum % 10;
                A->val = sum;
                if (A->next == NULL){
                    car = A;
                }
                A = A->next;
                B = B->next;
            }
            if (carry){
                ListNode* nn = new ListNode(carry);
                car->next = nn;
            }
            return l1;
        } 
        return NULL;
    }
};