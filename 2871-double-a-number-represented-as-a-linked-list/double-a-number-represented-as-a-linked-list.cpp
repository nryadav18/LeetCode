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
    ListNode* doProcess(ListNode* head){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        ListNode* temp = head , *prev = NULL;
        int carry = 0;
        while (temp){
            int val = temp->val * 2 + carry;
            temp->val = val % 10;
            val /= 10;
            carry = val;
            prev = temp;
            temp = temp->next;
        }
        if (carry){
            ListNode*nn = new ListNode(carry);
            prev->next = nn;
        }
        return head;
    }
    ListNode* reverse(ListNode* head){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        ListNode* prev = NULL, *cur = head;
        while (cur){
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (!head) return head;
        if (!head->next){
            if (head->val <= 4) head->val *= 2;
            else{
                int val = head->val * 2;
                ListNode*nn = new ListNode(val%10);
                val /= 10;
                head->val = val;
                head->next = nn;
            }
            return head;
        }
        head = reverse(head);
        head = doProcess(head);
        head = reverse(head);
        return head;
    }
};