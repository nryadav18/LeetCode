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
    int levelOrder(TreeNode* root){ //Level Order Traversal Function.
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        queue<TreeNode*>q; //Queue which contains TreeNode Addresses.
        q.push(root);
        while(!q.empty()){
            int sum = 0;
            int n = q.size();
            for (int i = 0 ; i < n ; i++){
                TreeNode* nn = q.front();
                q.pop();
                if (nn->left) q.push(nn->left);
                if (nn->right) q.push(nn->right);
                sum += nn->val;
            }
            if (q.empty()) return sum; 
            //Returning Sum, whenever the Queue is Empty for Next Iteration.
        }
        return 0; //Atlast Returning Value of this Function.
    }
    int deepestLeavesSum(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (!root->left and !root->right) return root->val; //Base Case.
        return levelOrder(root); //Level Order Function Call.
    }
};