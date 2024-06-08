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
    void makeLinkedList(TreeNode* root,vector<TreeNode*>&raj){
        ios_base::sync_with_stdio(0); //Beat Booster
        cin.tie(nullptr);
        int ind = 1, n = raj.size(); //ind variable to Traverse in Addresses Vector
        cout << n << endl;
        while (ind < n){
            root->left = NULL; //Make all the Left Child Addresses as NULL
            root->right = raj[ind++]; //Make all the Right Child Addresses as Pre Order
            root = root->right; //Move to Right Child of the Current Root
        }
    }
    void doPreOrderTraversal(TreeNode* root,vector<TreeNode*>&raj){
        ios_base::sync_with_stdio(0); //Beat Booster
        cin.tie(nullptr);
        if (root == NULL){ 
            return; //Base Case
        }
        raj.push_back(root); //Store Tree Node Addresses in Pre Order
        doPreOrderTraversal(root->left,raj); //Make a Left Recursive Call
        doPreOrderTraversal(root->right,raj); //Make a Right Recursive Call
    }
    void flatten(TreeNode* root) {
        ios_base::sync_with_stdio(0);//Beat Booster
        cin.tie(nullptr);
        if (root != NULL){ ////No Modifications without Root Node and Children Nodes
            vector<TreeNode*>raj; //Vector which stores TreeNode Addresses
            doPreOrderTraversal(root,raj); //PreOrder Traversal Function Call
            makeLinkedList(root,raj); //Function Call to make Linked List
        }
    }
};