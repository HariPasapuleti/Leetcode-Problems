class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> hash_map;
        hash_map['I'] = 1;
        hash_map['V'] = 5;
        hash_map['X'] = 10;
        hash_map['L'] = 50;
        hash_map['C'] = 100;
        hash_map['D'] = 500;
        hash_map['M'] = 1000;

        int i = 0, sum = 0;
        while (i < s.size()) {

            if (i > 0 && hash_map[s[i]] > hash_map[s[i - 1]]) {

                sum += hash_map[s[i]] - 2*hash_map[s[i - 1]];
            } else {
                sum += hash_map[s[i]];
            }
            i++;
        }

        return sum;
    }
};