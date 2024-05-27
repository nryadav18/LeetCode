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
    int levelOrderTraversal(TreeNode* root){ //LOT Function
        ios_base::sync_with_stdio(0); //Beat Booster
        cin.tie(nullptr);
        queue<TreeNode*>q; //A Queue to Store Each Node Address at Each Level
        q.push(root); //Intially add Root Node to continue further
        int maxLevel = INT_MIN, maxLevelSum = INT_MIN, curLevel = 1; //Set Intial Values
        while (!q.empty()){ //Until the Queue gets Empty
            int n = q.size() , curLevelSum = 0; //Keep a Track of Each Level Sum
            for (int i=0;i<n;i++){ //Travase in each level using the declared Queue
                TreeNode* curNode = q.front(); //Get the Front Node in the Queue
                q.pop(); //Pop it out to mark it as Checked
                if (curNode->left) q.push(curNode->left); //Push Left Node of CurNode
                if (curNode->right) q.push(curNode->right); //Push Right Node of CurNode
                curLevelSum += curNode->val; //Add values of Each Node to our Variable
            }
            if (curLevelSum > maxLevelSum and curLevel > maxLevel){ //Check Condition
                maxLevelSum = curLevelSum; //Update the MaximumLevelSum and the
                maxLevel = curLevel; //MaximumLevel we can achieve.
            }
            curLevel++; //Increment Current Level after completion of a Level
        }
        return maxLevel; //Return the Maximum Level we can achieve through LOT;
    }
    int maxLevelSum(TreeNode* root) {
        ios_base::sync_with_stdio(0); //Beat Booster
        cin.tie(nullptr);
        if (!root->left and !root->right) return 1; //Base Case
        return levelOrderTraversal(root); //Returning the Maximum using LOT FunctionCall
    }
};