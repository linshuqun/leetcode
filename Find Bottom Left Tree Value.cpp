/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> nodes;
        nodes.push(root);
        TreeNode* temp;
        while (!nodes.empty()) {
            temp = nodes.front();
            nodes.pop();
            if (temp->right) nodes.push(temp->right);
            if (temp->left) nodes.push(temp->left);
        }
        return temp->val;
    }
};
