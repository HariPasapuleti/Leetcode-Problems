class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string, int> hash_map;
        string word = "";
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == ' ') {
                hash_map[word]++;
                cout << word << endl;
                word = "";
            } else {
                word += s1[i];
            }
            
        }
        hash_map[word]++;
        cout << word << endl;

        word = "";
        for (int j = 0; j < s2.size(); j++) {
            if (s2[j] == ' ') {
                hash_map[word]++;
                cout << word << endl;
                word = "";
            }
            else {
                word += s2[j];
            }
        }
        if (s2.size() > 1)
            hash_map[word]++;
        // cout << word << endl;

        vector<string> result;
        for (auto& pair : hash_map) {
            cout << pair.first << pair.second << endl;
            if (pair.second == 1) {
                result.push_back(pair.first);
            }
        }
        return result;
    }
};