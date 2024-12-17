class Solution {
public:
    string decodeString(string s) {

        stack<int> countSt;
        stack<string> charSt;
        string currStr = "";
        int number = 0;
        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {
                number = number * 10 + (s[i] - '0');
            } else if (s[i] == '[') {
                countSt.push(number);
                charSt.push(currStr);
                currStr = "";
                number = 0;
            } else if (s[i] == ']') {
                int repeatNum = countSt.top();
                string prevStr = charSt.top();
                countSt.pop();
                charSt.pop();
                string repeatStr = "";
                for (int j = 0; j < repeatNum; j++) {
                    repeatStr += currStr;
                }
                currStr = prevStr + repeatStr;
            } else {
                currStr += s[i];
            }
        }

        return currStr;
    }
};