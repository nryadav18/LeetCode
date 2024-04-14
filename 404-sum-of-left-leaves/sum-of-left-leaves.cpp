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
    int Sum = 0;
    void inOrder(TreeNode* root,bool flag){
        if (root==NULL) return;
        if (flag and root->left == NULL and root->right == NULL){
            Sum += root->val;
            //cout << root->val << " ";
        }
        inOrder(root->left,true);
        inOrder(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (root->left == NULL and root->right == NULL){
            return 0;
        }
        inOrder(root,true);
        return Sum;
    }
};