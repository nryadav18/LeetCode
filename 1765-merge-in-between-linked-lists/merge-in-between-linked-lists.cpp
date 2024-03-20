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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ios_base::sync_with_stdio(0);
        int cnt = 0;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* raj;
        ListNode* jyo;
        while (temp1 != NULL){
            if (cnt+1 == a){
                raj = temp1;
            }
            else if (cnt == b+1){
                jyo = temp1;
            }
            cnt++;
            temp1 = temp1->next;
        }
        raj->next = list2;
        while (temp2->next!=NULL){
            temp2 = temp2->next;
        }
        temp2->next = jyo;
        return list1;
    }
};