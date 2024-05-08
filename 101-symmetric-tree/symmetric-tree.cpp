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
    bool isSymmetric(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (!root->left and !root->right) return true;
        queue<TreeNode*>q1,q2;
        q1.push(root) , q2.push(root);
        while (!q1.empty() and !q2.empty()){
            int n = q1.size() , m = q2.size();
            if (n != m) return false;
            for (int i = 0 ; i < n ; i ++){
                TreeNode* nn1 = q1.front() , *nn2 = q2.front();
                q1.pop() , q2.pop();
                if (nn1->val != nn2->val) return false;
                if (nn1->left and nn2->right){
                    if (nn1->left->val != nn2->right->val) return false;
                    q1.push(nn1->left) , q2.push(nn2->right);                    
                }
                else if (nn1->left and !nn2->right) return false;
                else if (nn2->left and !nn1->right) return false;
                if (nn1->right and nn2->left){
                    if (nn1->right->val != nn2->left->val) return false;
                    q1.push(nn1->right) , q2.push(nn2->left);                    
                }
                else if (nn1->right and !nn2->left) return false;
                else if (nn2->right and !nn1->left ) return false;
            }
        }
        return true;
    }
};