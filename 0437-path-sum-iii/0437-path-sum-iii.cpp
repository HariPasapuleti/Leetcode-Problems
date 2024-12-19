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
    int count = 0;
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> path;
        long long sum = 0;
        dfs(root, path, targetSum, sum);
        return count;
    }
    void dfs(TreeNode* root, unordered_map<long long, int> path, int t,
             long long sum) {
        if (root == NULL) {
            return;
        }
        sum += root->val;
        if (sum == t)
            count++;
        if (path.find(sum - t) != path.end()) {
            count += path[sum - t];
        }
        path[sum]++;
        dfs(root->left, path, t, sum);
        dfs(root->right, path, t, sum);
        path[sum]--;
    }
};