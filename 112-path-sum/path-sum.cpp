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
    bool isFound = false;
    void inOrder(TreeNode* root,int tar,int sum){
        if (isFound or !root) return;
        sum += root->val;
        inOrder(root->left,tar,sum);
        if (sum == tar and !root->left and !root->right){
            isFound = true;
            return;
        }
        inOrder(root->right,tar,sum);
        sum -= root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (!root) return false;
        if (!root->left and !root->right) return root->val==targetSum;
        inOrder(root,targetSum,0);
        return isFound;
    }
};