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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> nodes;
        vector<int> result;
        if (!root) return result;
        nodes.push(root);
        while (!nodes.empty()) {
            int size = nodes.size();
            int max = nodes.front()->val;
            TreeNode* temp;
            for (int i = 0; i < size; i++) {
                temp = nodes.front();
                if (temp->val > max) max = temp->val;
                if (temp->left) nodes.push(temp->left);
                if (temp->right) nodes.push(temp->right);
                nodes.pop();
            }
            result.push_back(max);
        }
        return result;
    }
};
