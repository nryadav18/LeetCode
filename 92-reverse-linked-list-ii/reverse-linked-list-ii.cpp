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
public: //Single Pass Solution
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ios_base::sync_with_stdio(0); //Beats Booster
        cin.tie(nullptr);
        if (head->next == NULL or left == right) {
            return head; //Base Case 
        }
        ListNode* temp = head, *start = NULL; //pointers to maintain intial declarations
        while (temp != NULL and left-- > 1 and right-- > 1){
            start = temp; //maintain start pointer to connect after reversal
            temp = temp->next; //temp pointer to find the intial reversal head node 
        }
        ListNode* prev = NULL, *cur = temp, *next = NULL;
        while (cur != NULL and right--){ //Basic LinkedList Reversal Technique
            next = cur->next; //Maintain next of current node
            cur->next = prev; //change the Links between them
            prev = cur; //Assign the current node to previous node
            cur = next; //Assign the next node to current node
        }
        if (start != NULL){
            start->next = prev; //Connect Start next to prev
        }
        else{
            head = prev; //First Major Edge Case to Handle
        }
        if (temp != NULL){
            temp->next = cur; //Second Major Edge Case to Handle
        }
        return head; //Return Head of Final Modified Linked List After Reversal
    }
};