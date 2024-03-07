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
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* it = head;
        while (it!=NULL){
            len++;
            it = it->next;
        }
        int mid = len/2;
        int cnt = 0;
        while (cnt <= mid and head!=NULL){
            if (cnt==mid){
                return head;
            }
            cnt++;
            head = head->next;
        }
        return head;
    }
};