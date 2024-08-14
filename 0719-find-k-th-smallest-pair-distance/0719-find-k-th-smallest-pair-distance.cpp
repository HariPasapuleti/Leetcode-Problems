class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {

        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // int left = 0, right = nums[n - 1] - nums[0];
        // while (left < right) {
        //     int mid = (left + right) >> 1;
        //     int count = 0, j = 0;
        //     for (int i = 0; i < n; i++) {
        //         while (j < n && nums[j] - nums[i] <= mid)
        //             j++;
        //         count += j - i - 1;
        //     }
        //     if (count < k)
        //         left = mid + 1;
        //     else
        //         right = mid;
        // }
        // return left;

        int N = 1000000;
        vector <int> vec(N, 0);

        for(int i = 0; i < nums.size()-1; i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                int temp = abs(nums[i] - nums[j]);
                vec[temp]++;
            }
        }

        for (int i = 0; i < N; i++) {
            if (vec[i] >= k) return i;
            k -= vec[i];
        }
        return 0;

        // sort(vec.begin(), vec.end());

        // return vec[k-1];
    }
};