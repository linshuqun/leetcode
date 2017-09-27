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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        vector<TreeNode*> root;
		for (int i = 0; i < nums.size(); i++) {
			TreeNode* add = new TreeNode(nums[i]);
			if (root.empty()) {
				root.push_back(add);
			}
			else {
				while (!root.empty() && root.back()->val < nums[i]) {
					add->left = root.back();
					root.pop_back();
				}
				if (!root.empty()) root.back()->right = add;
				root.push_back(add);
			}
		}
		return root.front();
    }
};
