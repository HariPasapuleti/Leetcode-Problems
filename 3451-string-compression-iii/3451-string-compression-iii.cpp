class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        stack<string> st;
        // st.push(word[0]);
        int i = 0, j = 0;
        int n = word.size();
        while (i < n && j <= n) {
            while (word[i] == word[j]) {
                j++;
            }
            int temp = j - i;
            while (temp > 0) {
                if (temp <= 9) {
                    comp += to_string(temp);
                    temp = 0;
                } else {
                    comp += '9';
                    temp -= 9;
                }
                comp += word[i];
            }
            i = j;
            j++;
        }
        return comp;
    }
};