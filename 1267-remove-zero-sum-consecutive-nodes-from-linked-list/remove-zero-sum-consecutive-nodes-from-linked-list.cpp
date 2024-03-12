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
    void zeroCall(vector<int>&v,int n){
        bool flag = false;
        for (int i=0;i<n;i++){
            if (v[i] == 0){
                v.erase(v.begin()+i);
                //n--;
                flag = true;
                break;
            }
        }
        if (flag) zeroCall(v,v.size());
    }
    void call(vector<int>&v,int n){
        int i,j;
        bool flag = false;
        int sum = 0;
        for(i=0;i<n-1;i++){
            sum = v[i];
            flag = false;
            for (j=i+1;j<n;j++){
                sum += v[j];
                if (sum == 0){
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
        if (flag){
            //cout << i << " " << j << endl;
            v.erase(v.begin()+i,v.begin()+j+1);
            // for (auto it : v){
            //     cout << it << " ";
            // }
            // cout << endl;
            call(v,v.size());
        }
    }
    ListNode* removeZeroSumSublists(ListNode* head) {
        if (head == NULL or (head->val==0 and head->next==NULL)) return NULL;
        vector<int>v;
        ListNode* jyo = head;
        while (jyo != NULL){
            v.push_back(jyo->val);
            jyo = jyo->next;
        }
        zeroCall(v,v.size());
        call(v,v.size());
        // for (auto it : v){
        //     cout << it << " ";
        // }
        //cout << endl;
        ListNode* raj;
        int i=0;
        while (i<v.size()){
            if (i==0){
                jyo = new ListNode(v[i]);
                raj = jyo; 
            }
            else{
                ListNode* nn = new ListNode(v[i]);
                raj->next = nn;
                raj = nn;
            }
            i++;
        } 
        return jyo;
    }
};