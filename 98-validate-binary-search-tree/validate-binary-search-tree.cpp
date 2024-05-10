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
    long long maxi = LLONG_MIN;
    bool flag = true;
    void inOrder(TreeNode* root){
        if (!flag or !root) return;
        inOrder(root->left);
        if (maxi >= root->val) flag = false;
        if (maxi < root->val) maxi = root->val;
        inOrder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (!root->left and !root->right) return true;
        if (root->left and !root->right and !root->left->left and !root->left->right)   
        return (root->val > root->left->val)?true:false;
        if (!root->left and root->right and !root->right->left and !root->right->right) 
        return (root->val < root->right->val)?true:false;
        inOrder(root);
        return flag;
    }
};