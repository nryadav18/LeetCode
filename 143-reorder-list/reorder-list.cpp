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
    void reorderList(ListNode* head) {
        if (head->next != NULL and head->next->next != NULL){
            vector<Node*>v;
            Node* temp = head;
            while (temp != NULL){
                v.push_back(temp);
                temp = temp->next;
            }
            int j = v.size()-1;
            int n = v.size()/2;
            Node* cur = head;
            Node* nxt = head->next;
            while (j>=n){
                Node* temp = v[j];
                cur->next = temp;
                temp->next = nxt;
                cur = nxt;
                nxt = cur->next;
                j--;
            }
            cur->next->next = NULL;
        }
    }
};