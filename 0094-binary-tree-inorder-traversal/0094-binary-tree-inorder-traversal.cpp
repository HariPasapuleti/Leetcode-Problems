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
    vector<int> vec;

    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return vec;
    }

    void inorder(TreeNode* root)
    {
        if(root == NULL) return;

        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);

    }
};