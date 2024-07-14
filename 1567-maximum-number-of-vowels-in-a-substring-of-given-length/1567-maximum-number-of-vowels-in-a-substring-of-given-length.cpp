class Solution {
public:
    int maxVowels(string s, int k) {
        
        int vowels_count = 0, max_vowels = 0, i = 0;
        // string vowels = "aeiou";

        while(i < s.size())
        {
            if(s[i] == 'a' || s[i] =='e'|| s[i] =='i'|| s[i] =='o'|| s[i] =='u') {
                vowels_count++;
            }
            max_vowels = max(max_vowels, vowels_count);
            if(i >= k - 1 && (s[i - k + 1] == 'a' || s[i - k + 1] =='e'|| s[i - k + 1] =='i'|| s[i - k + 1] =='o'|| s[i - k + 1] =='u')) {
                vowels_count--;
            }
            i++;
        }
        return max_vowels;
    }
};