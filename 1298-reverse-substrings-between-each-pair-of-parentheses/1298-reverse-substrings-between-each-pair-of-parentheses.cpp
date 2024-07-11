class Solution {
public:
    string reverseParentheses(string s) {

        deque<int> index_stack;
        vector<char> result;

        for(char char_s : s)
        {
            if(char_s == '(') {
                index_stack.push_back(result.size());
            }
            else if(char_s == ')') {
                int start_index = index_stack.back();
                index_stack.pop_back();
                reverse(result.begin() + start_index, result.end());
            }
            else {
                result.push_back(char_s);
            }
        }
        return string(result.begin(), result.end());
    }
};