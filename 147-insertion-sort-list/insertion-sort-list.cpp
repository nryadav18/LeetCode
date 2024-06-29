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
    void doModify(vector<int>result,ListNode* head){
        ListNode* temp = head;
        int ind = 0;
        while (temp != NULL){
            temp->val = result[ind++];
            temp = temp->next;
        }
    }
    vector<int>getElements(ListNode* head){
        if (head->next == NULL){
            return {head->val};
        }
        ListNode* temp = head;
        vector<int>result;
        while (temp != NULL){
            result.push_back(temp->val);
            temp = temp->next;
        }
        return result;
    }
    ListNode* insertionSortList(ListNode* head) {
        vector<int>result = getElements(head);
        if (result.size() != 1){
            sort(result.begin(),result.end());
            doModify(result,head);   
        }
        return head;
    }
};