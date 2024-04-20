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
    unordered_map<int,int>up;
    int maxFreq = 0;
    void inOrder(TreeNode* root){
        if (root == NULL) return;
        up[root->val]++;
        if (maxFreq < up[root->val]){
            maxFreq = up[root->val];
        }
        inOrder(root->left);
        inOrder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        if (root->left == NULL and root->right == NULL) return {root->val};
        inOrder(root);
        vector<int>v;
        for(auto it : up){
            if (it.second == maxFreq){
                v.push_back(it.first);
            }
        }
        return v;
    }
};