class Solution {
public:
    int getLucky(string s, int k) {

        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            int curr = s[i] - 'a' + 1;
            cout << curr << " ";
            if (curr >= 10) {
                count += curr % 10;
                count += curr / 10;
                cout << count << " ";
            } else {
                count += curr;
            }
        }
        cout << count << endl;

        while (k-1 > 0) {
            int count_temp = 0;
            while (count > 0) {
                count_temp += count % 10;
                count /= 10;
            }
            count = count_temp;
            k--;
        }

        return count;
    }
};