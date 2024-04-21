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
private: 
    vector<int>v;
    void inOrder(TreeNode* root){
        if (root == NULL){
            return;
        }
        inOrder(root->left);
        v.push_back(root->val);
        inOrder(root->right);
    }
public:
    int minDiffInBST(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        inOrder(root);
        int n = v.size();
        int minVal = INT_MAX;
        for (int i=0;i<n-1;i++){
            int diff = v[i+1] - v[i];
            if (minVal > diff){
                minVal = diff;
            }
        }
        return minVal;
    }
};