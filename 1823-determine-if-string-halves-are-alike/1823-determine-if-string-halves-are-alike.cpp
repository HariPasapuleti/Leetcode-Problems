class Solution {
public:
    bool halvesAreAlike(string s) {

        int n = s.size(), i = 0, count1 = 0, count2 = 0;

        while (i < n / 2) {
            if (isVowel(s[i]))
                count1++;
            if (isVowel(s[n / 2 + i]))
                count2++;
            i++;
        }
        if (count1 == count2)
            return true;
        return false;
    }

    int isVowel(char str) {
        string vowels = "aeiouAEIOU";
        return (vowels.find(str) != string::npos);
    }
};