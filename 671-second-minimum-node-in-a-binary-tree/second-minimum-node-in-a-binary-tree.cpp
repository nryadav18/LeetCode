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
    void funCall(TreeNode* root,set<int>&s){
        if (root == NULL) return;
        funCall(root->left,s);
        s.insert(root->val);
        funCall(root->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>s;
        funCall(root,s);
        vector<int>v(s.begin(),s.end());
        if (v.size()==1) return -1;
        return v[1];
    }
};