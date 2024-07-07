class Solution {
public:
    int minOperations(vector<int>& nums) {

        // sort(nums.begin(), nums.end());
        map<int, int> nums_count;

        for(int num : nums)
        {
            nums_count[num]++;
        }
        int operation_count = 0;
        auto element = nums_count.begin();

        while(element != nums_count.end())
        {
            if(element->second == 1) {
                return -1;
            }
            if(element->second % 3 == 0 || element->second % 2 == 1) {
                operation_count++;
                element->second -= 3;
                cout << 3 << endl;
            }
            else if(element->second % 2 == 0) {
                operation_count++;
                element->second -= 2;
                cout << 2 << endl;
            }
            
            if(element->second == 0) element++;
            
        }
        return operation_count;
        // return -1;
        
    }
};