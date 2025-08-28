/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> generateTrees(int n) { return solve(1, n); }

    vector<TreeNode*> solve(int start, int end) {

        if (start > end)
            return {NULL};
        else if (start == end) {
            TreeNode* root = new TreeNode(start);
            return {root};
        }

        vector<TreeNode*> res;
        for (int i = start; i <= end; i++) {
            vector<TreeNode*> left_bst = solve(start, i - 1);
            vector<TreeNode*> right_bst = solve(i + 1, end);

            for (TreeNode* left_root : left_bst) {
                for (TreeNode* right_root : right_bst) {
                    TreeNode* root = new TreeNode(i);
                    root->left = left_root;
                    root->right = right_root;
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};