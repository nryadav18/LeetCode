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
    int findBottomLeftValue(TreeNode* root) {
        vector<vector<int>>v;
        if (root == NULL) return -1;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            vector<int>t;
            int n = q.size();
            for (int i=0;i<n;i++){
                TreeNode* Node = q.front();
                q.pop();
                if (Node->left != NULL){
                    q.push(Node->left);
                }
                if (Node->right != NULL){
                    q.push(Node->right);
                }
                t.push_back(Node->val);
            }
            v.push_back(t);
        }
        return v[v.size()-1][0];
    }
};