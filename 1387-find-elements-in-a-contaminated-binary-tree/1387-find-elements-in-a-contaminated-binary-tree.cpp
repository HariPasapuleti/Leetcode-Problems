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
class FindElements {
    unordered_set<int> seen;

public:
    FindElements(TreeNode* root) { bfs(root); }

    bool find(int target) { return seen.find(target) != seen.end(); }

private:
    void bfs(TreeNode* root) {
        queue<TreeNode*> queue;
        root->val = 0;
        queue.push(root);

        while (!queue.empty()) {
            TreeNode* curr = queue.front();
            queue.pop();
            seen.insert(curr->val);
            if (curr->left) {
                curr->left->val = curr->val * 2 + 1;
                queue.push(curr->left);
            }
            if (curr->right) {
                curr->right->val = curr->val * 2 + 2;
                queue.push(curr->right);
            }
        }
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */