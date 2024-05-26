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
    //NRY Code goes here:
    //Approach: Swap Left and Right Childs at Each Level;
    void levelOrderTraversal(TreeNode* root){ //LevelOrderFunction
        ios_base::sync_with_stdio(0); //Beat Booster
        cin.tie(nullptr);
        queue<TreeNode*>q; //A Queue which holds Node Addresses
        q.push(root); //Initially Add Root to Queue
        while (!q.empty()){ //Until the Queue gets Empty
            int n = q.size(); 
            for (int i=0;i<n;i++){ //Traverse in Each Level of the Binary Tree
                TreeNode* nn = q.front(); //Consider the Front Node in the Queue
                q.pop(); //Remove the Front Node in the Queue
                //Swap Node Addresses at Each Level
                TreeNode* swap = nn->left; //Swapping two Node Addresses int the Tree
                nn->left = nn->right;      //with the help of Swap TreeNode Pointer
                nn->right = swap;          //Once after Swapping then add childs to Queue
                if (nn->left) q.push(nn->left); //Add LeftChild of CurrentNode to Queue
                if (nn->right) q.push(nn->right); //Add RightChild of CurrentNode to Queue
            }
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        ios_base::sync_with_stdio(0); //Beat Booster
        cin.tie(nullptr);
        if (!root or (!root->left and !root->right)) return root; //BaseCase
        levelOrderTraversal(root); //levelOrder FunctionCall
        return root; //Returning Resultant Modified Root
    }
};