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
    int res = 0 , val = 0;
    void addCall(TreeNode* root){
        if (root == NULL) return;
        val = (val*10)+root->val;
        addCall(root->left);
        if (root->left == NULL and root->right == NULL){
            //cout << val << " ";
            res += val;
        }
        addCall(root->right);
        val = val/10;
    }
    int sumNumbers(TreeNode* root) {
        if (root->left == NULL and root->right == NULL){
            return root->val;
        }
        addCall(root);
        return res;
    }
};