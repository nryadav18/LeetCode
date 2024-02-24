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
    bool flag = false;
    TreeNode* subRoot = NULL;
    void getFunCall(TreeNode* root,int val){
        if (flag) return;
        if (root == NULL) return;
        if (root->val == val and !flag){
            flag = true;
            subRoot = root; 
            return;
        }
        getFunCall(root->left,val);
        getFunCall(root->right,val);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL) return NULL;
        if (root->left == NULL and root->right == NULL){
            if (root->val == val){
                return root;
            }
            return NULL;
        }
        getFunCall(root,val);
        return subRoot;
    }
};