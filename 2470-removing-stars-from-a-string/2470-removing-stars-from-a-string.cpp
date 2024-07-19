class Solution {
public:
    string removeStars(string s) {

        stack<char> s_stack;
        stack<char> stack1;

        for(auto& ch : s)
        {
            if(ch ==  '*') {
                s_stack.pop();
            }
            else {
                s_stack.push(ch);
            }
        }

        string result = "";
        while(!s_stack.empty())
        {
            stack1.push(s_stack.top());
            s_stack.pop();
        }
        while(!stack1.empty())
        {
            result += stack1.top();
            stack1.pop();
        }

        return result;
        
    }
};