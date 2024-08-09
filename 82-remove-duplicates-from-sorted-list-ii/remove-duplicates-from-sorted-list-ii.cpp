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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL or head->next == NULL) return head;
        map<int,int>mp;
        ListNode* temp = head;
        while (temp != NULL){
            mp[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        ListNode* prev = NULL;
        for (auto it : mp){
            if (it.second == 1){
                temp->val = it.first;
                prev = temp;
                temp = temp->next;
            }
        }
        if (prev == NULL) return prev;
        prev->next = NULL;
        return head;
    }
};