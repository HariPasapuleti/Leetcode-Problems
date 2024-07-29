class Solution {
public:
    int numTeams(vector<int>& rating) {

        int total = 0, n = rating.size();
        for (int i = 0; i < n; i++) {
            int right_less = 0, right_more = 0, left_less = 0, left_more = 0;
            for (int j = 0; j < i; j++) {
                if (rating[j] > rating[i]) {
                    left_more++;
                } else {
                    left_less++;
                }
            }
            for (int j = i + 1; j < n; j++) {
                if (rating[j] > rating[i]) {
                    right_more++;
                } else {
                    right_less++;
                }
            }
            total += left_less * right_more + left_more * right_less;
        }
        return total;

        // Time limit exeeded at 69th testcase.
        // int n = rating.size();
        // if(n < 3) return 0;
        // int i = 0, j=1,k=2,count=0;
        // while(i<n-2)
        // {
        //     if(rating[i] < rating[j] && rating[j] < rating[k] ||
        //     rating[i]>rating[j] && rating[j]>rating[k]) {
        //         count++;
        //     }
        //     if(k==n-1) {
        //         j++;
        //         k=j;
        //     }
        //     if(j==n-1) {
        //         i++;
        //         j=i+1;
        //         k=j;
        //     }
        //     if(i==n-2) return count;
        //     k++;
        // }
        // return count;
    }
};