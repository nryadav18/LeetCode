/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool applyingBinarySearch(vector<int>&v,int k){
        int i=0,j=v.size()-1;
        while(i<j){
            int val = v[i]+v[j];
            if (val == k) return true;
            else if (val > k) j--;
            else i++;
        }
        return false;
    }
    void inOrder(TreeNode* root,vector<int>&v){
        if (!root) return;
        inOrder(root->left,v);
        v.push_back(root->val);
        inOrder(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        if (!root->left and !root->right) return false;
        vector<int>v;
        inOrder(root,v);
        for (auto it : v) cout << it<<" ";
        return applyingBinarySearch(v,k);
    }
};