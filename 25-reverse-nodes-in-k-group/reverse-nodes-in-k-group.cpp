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
    //ReWriting the Reversed Values in the Vector into Linked List
    ListNode* modifyValues(ListNode* head,vector<int>result){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        ListNode* temp = head;
        int ind = 0 , n = result.size();
        while(temp != NULL and ind < n){
            temp->val = result[ind++];
            temp = temp->next;
        }
        return head;
    }
    //Reversing based on Low and High indexes in the Vector
    void doReverse(vector<int>&result,int low,int high){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        while (low < high){
            int val = result[low];
            result[low] = result[high];
            result[high] = val;
            low++ , high--;
        }
    }
    //Custom Reversing for Reversing in K Groups in the Vector
    void customReverse(vector<int>&result,int k){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = result.size(), i = 0, j = k;
        while (j<=n){
            doReverse(result,i,j-1);
            i = j;
            j += k;
        }
    }
    //Adding Linked List Node Values into the Vector
    vector<int>getValues(ListNode* head){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        ListNode* temp = head;
        vector<int>result;
        while (temp != NULL){
            result.push_back(temp->val);
            temp = temp->next;
        }
        return result;
    }
    //Main Function to Return the head of LL after reversing in K Groups
    ListNode* reverseKGroup(ListNode* head, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (head->next == NULL or k == 1) return head;
        vector<int>result = getValues(head);
        customReverse(result,k);
        return modifyValues(head,result);
    }
};