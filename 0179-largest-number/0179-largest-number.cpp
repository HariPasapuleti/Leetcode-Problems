class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> numString;

        for (int num : nums) {
            numString.push_back(to_string(num));
        }

        sort(numString.begin(), numString.end(),
             [](string& a, string& b) { return a + b > b + a; });

        string large_num = "";
        if (numString[0] == "0") {
            return "0";
        }

        for (auto str : numString) {
            large_num += str;
        }
        return large_num;

        // string res = "";
        // sort(nums.begin(), nums.end());
        // int i=0,  max_digit=0, index=0;
        // while(!nums.empty()) {
        //     int f_digit =0;
        //     int temp=nums[i];
        //     while(temp > 0)
        //     {
        //         if(temp<10) {
        //             f_digit=temp;
        //             break;
        //         }
        //         else temp/=10;

        //     }

        //     if(f_digit>=max_digit) {
        //         max_digit=f_digit;
        //         index=i;
        //     }

        //     i++;
        //     if(nums.size()>0 &&i==nums.size()) {
        //         res += to_string(nums[index]);
        //         nums.erase(nums.begin()+ index);
        //         i=0, max_digit=0, index=0;
        //     }

        // }
        // return res;
    }
};