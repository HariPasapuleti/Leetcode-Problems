class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        unordered_set <char> allowedSet(allowed.begin(), allowed.end());

        // unordered_map<char, int> hash_map;
        // for(int i = 0;i<allowed.size();i++)
        // {
        //     hash_map[allowed[i]]++;
        // }

        int consistent = 0;

        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            bool count = true;

            for(int j=0;j<temp.size();j++)
            {
                // if(hash_map[temp[j]] == 0) {
                //     count = false;
                //     break;
                // }

                if(allowedSet.find(temp[j]) == allowedSet.end()) {
                    count = false;
                    break;
                }
            }

            if(count) consistent++;
        }
        return consistent;


        
    }
};