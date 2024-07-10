class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        if(str1 + str2 != str2 + str1) return "";

        int gcd_length = gcd(str1.length(), str2.length());

        return str1.substr(0, gcd_length);

        // int i = 0, j = 0;
        // string gcd_of_strings = "";
        // while(i < str1.length() && j < str2.length())
        // {
        //     if(str1[i] == str2[i]) {
        //         gcd_of_strings += str1[i];
        //     }
        //     else {
        //         gcd_of_strings = "";
        //     }
        //     i++;
        //     j++;
        // }
        // return gcd_of_strings;
        
    }
private:
    int gcd(int a, int b) {
        if(b == 0) return a;
        return gcd(b, a % b);
    }

};