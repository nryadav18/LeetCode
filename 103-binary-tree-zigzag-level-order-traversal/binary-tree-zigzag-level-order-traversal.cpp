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
    vector<vector<int>>zigZagMyTree(TreeNode* root){
        vector<vector<int>>result;
        queue<TreeNode*>queue;
        queue.push(root);
        int level = 1;
        while (!queue.empty()){
            int n = queue.size();
            vector<int>store;
            for (int i=0;i<n;i++){
                TreeNode* node = queue.front();
                queue.pop();
                store.push_back(node->val);
                if (node->left) queue.push(node->left);
                if (node->right) queue.push(node->right);
            }
            if (level%2==0) reverse(store.begin(), store.end());
            result.push_back(store);
            level++;
        }
        return result;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == NULL) return {};
        return zigZagMyTree(root);
    }
};