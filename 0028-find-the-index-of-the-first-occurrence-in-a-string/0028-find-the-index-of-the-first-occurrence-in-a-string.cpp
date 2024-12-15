class Solution {
public:
    int strStr(string haystack, string needle) {

        int i = 0, k = 0, j = 0;
        while (i < haystack.size()) {
            if (haystack[k] == needle[j]) {
                k++;
                j++;
            } else {
                i++;
                k = i;
                j = 0;
            }
            if (j == needle.size())
                return i;
        }
        return -1;
    }
};