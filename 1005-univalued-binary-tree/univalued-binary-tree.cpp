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
    bool flag = true;
    void inOrder(TreeNode* root,int val){
        if (!flag){
            return;
        }
        else{
            if (!root) return;
            if (root->val != val){
                flag = false;
                return;
            }
            inOrder(root->left,val);
            inOrder(root->right,val);
        }
    }
    bool isUnivalTree(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (!root->left and !root->right) return true;
        inOrder(root,root->val);
        return flag;
    }
};