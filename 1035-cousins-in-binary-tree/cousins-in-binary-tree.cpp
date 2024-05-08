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
    bool isCousins(TreeNode* root, int x, int y) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            int n = q.size();
            bool isXFound = false , isYFound = false;
            for (int i = 0 ; i < n ; i++){
                TreeNode* nn = q.front();
                q.pop();
                if (nn->left and nn->right){
                    if (nn->left->val == x and nn->right->val == y) return false;
                    if (nn->left->val == y and nn->right->val == x) return false;
                }
                if (nn->left){
                    if (nn->left->val == x) isXFound = true;
                    if (nn->left->val == y) isYFound = true;
                    q.push(nn->left);
                }
                if (nn->right) {
                    if (nn->right->val == x) isXFound = true;
                    if (nn->right->val == y) isYFound = true;
                    q.push(nn->right);
                }
            }
            if (isXFound and isYFound) return true;
        }
        return false;
    }
};