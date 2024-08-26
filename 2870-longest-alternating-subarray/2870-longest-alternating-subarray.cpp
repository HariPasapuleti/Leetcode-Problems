class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {

        int i=1, temp_count=0,count=0;
        while(i<nums.size())
        {
            if(temp_count%2 == 0 && nums[i] == nums[i-1]+1) {
                temp_count++;
            }
            else if(temp_count%2 != 0 && nums[i] == nums[i-1]-1) {
                temp_count++;
            }
            else {

                if(temp_count == 0) i++;
                count =  max(count, temp_count);
                temp_count=0;
                continue;
            }
            i++;
        }
        count =  max(count, temp_count);

        if(count == 0) return -1;
        return count+1;
        // (count != 0)? return count+1: return -1;
        
    }
};