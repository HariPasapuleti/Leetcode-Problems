class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        mergeSort(nums, 0, nums.size() - 1);
        return nums;

    }
    void merge(vector<int>& vec, int low, int mid, int high)
    {
        vector<int> temp;
        int left = low, right = mid + 1;

        while(left <= mid && right <= high)
        {
            if(vec[left] <= vec[right])
            {
                temp.push_back(vec[left]);
                left++;
            }
            else {
                temp.push_back(vec[right]);
                right++;
            }
        }

        while(left <= mid)
        {
            temp.push_back(vec[left]);
            left++;
        }

        while(right <= high)
        {
            temp.push_back(vec[right]);
            right++;
        }

        for(int i = 0; i < temp.size(); i++)
        {
            vec[low + i] = temp[i];
        }
    }

    void mergeSort(vector<int> &vec, int low, int high) {
        
        if(low >= high) return;
        int mid = (low + high) / 2;
        mergeSort(vec, low, mid);
        mergeSort(vec, mid + 1, high);
        merge(vec, low, mid, high);

    }
};