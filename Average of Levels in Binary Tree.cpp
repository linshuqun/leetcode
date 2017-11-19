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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        queue<TreeNode*> node;
        node.push(root);
        while (!node.empty()) {
            int size = node.size();
            double sum = 0;
            for (int i = 0; i < size; i++) {
                TreeNode* temp = node.front();
                sum += temp->val;
                node.pop();
                if (temp->left) node.push(temp->left);
                if (temp->right) node.push(temp->right);
            }
            result.push_back(sum / size);
        }
        return result;
    }
};
