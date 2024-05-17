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
    void levelOrderTraversal(TreeNode* root){ // Level Order Traversal Function;
        queue<TreeNode*>q;
        q.push(root);
        int level = 0; //Variable to maintain Tree Level from Root;
        while (!q.empty()){
            int n = q.size();
            vector<int>val;  //Vector to hold Values of Odd Levels;
            vector<TreeNode*>add; //Vector to hold TreeNode Addresses of Odd Levels;
            for (int i = 0 ; i < n ; i++){
                TreeNode* nn = q.front();
                q.pop();
                if (nn->left) q.push(nn->left);
                if (nn->right) q.push(nn->right);
                if (level % 2 == 1){
                    val.push_back(nn->val); //Inserting Odd Level Node Values;
                    add.push_back(nn); //Inserting Odd Level Node Addresses;
                }
            }
            if (level % 2 == 1){
                reverse(val.begin(),val.end()); //Reverse Odd Level Node Values
                int ind = 0;
                for (auto it : add){
                    it->val = val[ind++]; //Replace the Reversed Values of Odd Levels;
                }
            }
            level++; //Increment the Level after each Iteration; 
        }
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (!root->left and !root->right) return root; //Base Case;
        levelOrderTraversal(root); // Level Order Traversal Function Call;
        return root;
    }
};