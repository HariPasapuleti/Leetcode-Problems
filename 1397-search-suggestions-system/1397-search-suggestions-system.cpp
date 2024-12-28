struct TrieNode {
    TrieNode* children[26] = {NULL};
    bool isEnd = false;
};

class Solution {
public:
    void insert(TrieNode* trie, string word) {

        for (auto& c : word) {
            if (!trie->children[c - 'a']) {
                trie->children[c - 'a'] = new TrieNode;
            }
            trie = trie->children[c - 'a'];
        }
        trie->isEnd = true;
    }

    vector<string> search(TrieNode* trie, string prefix) {

        vector<string> temp;
        for (auto& c : prefix) {
            if (!trie->children[c - 'a'])
                return {};
            trie = trie->children[c - 'a'];
        }
        dfs(trie, prefix, temp);
        return temp;
    }

    void dfs(TrieNode* trie, string pref, vector<string>& temp) {

        if (temp.size() == 3)
            return;
        if (trie->isEnd) {
            temp.push_back(pref);
        }

        for (int i = 0; i < 26; i++) {
            if (trie->children[i]) {
                dfs(trie->children[i], pref + (char)(i + 'a'), temp);
            }
        }
    }

    vector<vector<string>> suggestedProducts(vector<string>& products,
                                             string searchWord) {

        TrieNode* trie = new TrieNode;
        for (auto& ch : products) {
            insert(trie, ch);
        }
        vector<vector<string>> res;
        string str = "";
        for (auto& ch : searchWord) {
            str += ch;
            res.push_back(search(trie, str));
        }
        return res;
    }
};