class Solution {
public:
    bool isCircularSentence(string sentence) {

        int i = 0, j = sentence.size() - 1;
        if (sentence[i] != sentence[j])
            return false;

        while (i < sentence.size()) {
            if (sentence[i] == ' ') {
                if (sentence[i - 1] != sentence[i + 1])
                    return false;
            }
            i++;
        }
        return true;
    }
};