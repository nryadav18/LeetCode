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
    vector<int> largestValues(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (!root) return {};
        if (!root->left and !root->right) return {root->val};
        vector<int>result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size(), maxi = INT_MIN;
            for (int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
                maxi = max(maxi,node->val);
            }
            result.push_back(maxi);
        }
        return result;
    }
};