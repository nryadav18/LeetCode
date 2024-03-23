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
    typedef TreeNode Node;
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if (root == NULL) return {};
        vector<vector<int>>res;
        queue<Node*>tn;
        tn.push(root);
        while (!tn.empty()){
            vector<int>v;
            int n = tn.size();
            for (int i=0;i<n;i++){
                Node* temp = tn.front();
                tn.pop();
                if (temp->left != NULL){
                    tn.push(temp->left);
                }
                if (temp->right != NULL){
                    tn.push(temp->right);
                }
                v.push_back(temp->val);
            }
            res.push_back(v);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};