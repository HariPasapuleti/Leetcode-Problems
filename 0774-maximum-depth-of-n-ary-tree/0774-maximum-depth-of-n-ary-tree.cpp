/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {

        if (root == NULL)
            return 0;
        int res = 0;
        for (Node* x : root->children) {
            int h = maxDepth(x);
            res = max(res, h);
        }
        return res+1;
    }
};