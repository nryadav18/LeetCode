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
    void performDFS(TreeNode* root,int target, vector<vector<int>>&result, int sum, vector<int>&store){
        if (root == NULL) return;
        sum += root->val;
        // cout << "a" << "  " << sum << endl;
        store.push_back(root->val);
        performDFS(root->left,target,result,sum,store);
        if (sum == target and !root->left and !root->right){
            result.push_back(store);
        }
        // cout << "b" << " " << sum << endl;
        performDFS(root->right,target,result,sum,store);
        store.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>result;
        vector<int>store;
        performDFS(root,targetSum,result,0,store);
        return result;
    }
};