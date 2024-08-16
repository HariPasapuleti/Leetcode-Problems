class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {

        sort(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end());

        int i=0;
        int point = tasks.size() - 1, min_time = 0;
        while(i < processorTime.size())
        {
            int counter = 0;
            while(counter < 4) 
            {
                if(point == 0) break;
                min_time = max(min_time, processorTime[i] + tasks[point]);
                point--;
                counter++;
            }
            i++;
        }

        return min_time;
        
    }
};