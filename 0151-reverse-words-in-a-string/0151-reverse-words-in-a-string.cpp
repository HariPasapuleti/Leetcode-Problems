class Solution {
public:
    string reverseWords(string s) {

        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss >> word)
        {
            words.push_back(word);
        }
        reverse(words.begin(), words.end());
        
        string reversed_string = "";
        for(int i = 0; i < words.size(); i++)
        {
            reversed_string += words[i];
            if(i != words.size() - 1) reversed_string += " ";
        }
        return reversed_string;
    }
};