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
    int maxDepth(TreeNode* root) {
        int max = 0;
        if (root) {
            int leftMax = 1 + maxDepth(root->left);
            int rightMax = 1 + maxDepth(root->right);
            max = leftMax > rightMax ? leftMax : rightMax;
        }
        return max;
    }
};
