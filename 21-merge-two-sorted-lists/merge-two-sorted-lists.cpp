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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if (list1==NULL) return list2;
        if (list2==NULL) return list1;
        ListNode* head = NULL;
        ListNode* temp;
        ListNode* it1 = list1;
        ListNode* it2 = list2;
        while (it1 != NULL and it2 != NULL){
            if (it1->val < it2->val){
                if (head == NULL){
                    head = new Node(it1->val);
                    temp = head;
                }
                else{
                    Node* nn = new Node(it1->val);
                    temp->next = nn;
                    temp = nn;
                }
                it1 = it1->next;
            }
            else{
                if (head == NULL){
                    head = new Node(it2->val);
                    temp = head;
                }
                else{
                    Node* nn = new Node(it2->val);
                    temp->next = nn;
                    temp = nn;
                }
                it2 = it2->next;
            }
        }
        while (it1 != NULL){
            if (head == NULL){
                head = new Node(it1->val);
                temp = head;
            }
            else{
                Node* nn = new Node(it1->val);
                temp->next = nn;
                temp = nn;
            }
            it1 = it1->next;
        }
        while (it2 != NULL){
            if (head == NULL){
                head = new Node(it2->val);
                temp = head;
            }
            else{
                Node* nn = new Node(it2->val);
                temp->next = nn;
                temp = nn;
            }
            it2 = it2->next;
        }
        return head;
    }
};