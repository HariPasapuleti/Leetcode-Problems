class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        int n = 1;
        while (n < k) {
            n = word.size();
            for (int i = 0; i < n; i++) {
                char temp = 'a' + ((word[i] - 'a' + 1) % 26);
                word += temp;
            }
        }
        return word[k - 1];
    }
};