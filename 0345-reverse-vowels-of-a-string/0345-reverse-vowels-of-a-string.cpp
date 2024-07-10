class Solution {
public:
    string reverseVowels(string s) {

        string vowels = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u' ||s[i] == 'A' || s[i] == 'E'|| s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U') {
                vowels += s[i];
            }
        }

        int j = vowels.length() - 1, i = 0;

        while(i < s.length() && j >= 0)
        {
            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u' ||s[i] == 'A' || s[i] == 'E'|| s[i] == 'I'|| s[i] == 'O'|| s[i] == 'U') {
                s[i] = vowels[j];
                j--;
            }
            i++;
        }
        return s;
    }
};