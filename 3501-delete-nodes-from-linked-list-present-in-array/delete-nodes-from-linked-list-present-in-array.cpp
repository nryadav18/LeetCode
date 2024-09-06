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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>up;
        for (auto it : nums){
            up[it]++;
        }
        ListNode* newHead = NULL, *prev = NULL, *cur = head;
        vector<int>values;
        while (cur != NULL){
            if (up.find(cur->val) == up.end()){
                values.push_back(cur->val);
            }
            cur = cur->next;
        }
        cur = head;
        int i = 0;
        while (i < values.size()){
            cur->val = values[i++];
            if (i == values.size()){
                cur->next = NULL;
            }
            cur = cur->next;
        }
        return head;
    }
};