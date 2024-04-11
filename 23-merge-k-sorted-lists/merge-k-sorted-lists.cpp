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
    ListNode* createLL(vector<int>&v){
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        ListNode* head = NULL, *tail = NULL;
        for (auto it : v){
            ListNode* nn = new ListNode(it);
            if (head == NULL){
                head = tail = nn;
            }
            else{
                tail->next = nn;
                tail = nn;
            }
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<int>v;
        for (auto it : lists){
            while (it != NULL){
                v.push_back(it->val);
                it = it->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* head = createLL(v);
        return head;
    }
};