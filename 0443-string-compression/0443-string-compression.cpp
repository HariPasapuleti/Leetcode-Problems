class Solution {
public:
    int compress(vector<char>& chars) {

        int index = 0, i = 0;

        while(i < chars.size())
        {
            int count = 0, current_str = chars[i];
            while(i < chars.size() && chars[i] == current_str)
            {
                count++;
                i++;
            }

            chars[index++] = current_str;
            if(count > 1) {
                string count_str = to_string(count);
                    for(char c : count_str) chars[index++] = c;
            }

        }
        // cout << chars.size() << endl;
        chars.resize(index);
        return index;
    }
};