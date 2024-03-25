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
    ListNode* sortList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        if (head == NULL or head->next == NULL){
            return head;
        }
        vector<int>pos(5*1e4+1);
        vector<int>neg(5*1e4+1);
        int maxi = 0;
        int mini = 0;
        ListNode* temp = head;
        while(temp != NULL){
            if (temp->val < 0){
                int value = 0 - temp->val;
                neg[value]++;
                if (mini > temp->val){
                    mini = temp->val;
                }
            }
            else{
                pos[temp->val]++;
                if (maxi < temp->val){
                    maxi = temp->val;
                }
            }
            temp = temp->next;
        }
        mini = 0-mini;
        temp = head;
        for (int i=mini;i>=1;i--){
            if (neg[i] != 0){
                while (neg[i]--){
                    temp->val = -i;
                    temp = temp->next;
                }
            }
        }
        for (int i=0;i<=maxi;i++){
            if (pos[i] != 0){
                while (pos[i]--){
                    temp->val = i;
                    temp = temp->next;
                }
            }
        }
        return head;
    }
};