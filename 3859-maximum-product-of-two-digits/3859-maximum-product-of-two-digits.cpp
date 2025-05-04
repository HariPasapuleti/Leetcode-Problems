class Solution {
public:
    int maxProduct(int n) {
        int largest = 0, second_largest = 0;
        while (n > 0) {
            int temp = n % 10;
            if (temp > largest) {
                second_largest = largest;
                largest = temp;
            } else if (temp > second_largest) {
                second_largest = temp;
            }
            n /= 10;
        }
        return largest * second_largest;
    }
};