class Solution {

public:
    string mergeAlternately(string word1, string word2) {
        // vector<string> result_string;
        string result_string = "";
        int i = 0, j = 0;
        while(i < word1.size() || j < word2.size())
        {
            if(i < word1.size()) {
                result_string += word1[i];
                i++;
            }
            if(j < word2.size()) {
                result_string += word2[j];
                j++;
            }
        }
        return result_string;
    }    
};