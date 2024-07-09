class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {

        int start_time = customers[0][0];
        // vector<int> customer_waiting;
        double total_wait_time = 0, waiting_time = 0;
        if(customers.empty()) return 0;
        
        for(auto& customer : customers)
        {
            if(customer[0] > start_time) start_time = customer[0];
            waiting_time = start_time + customer[1] - customer[0];
            // cout << waiting_time << endl;
            total_wait_time += waiting_time;
            start_time = waiting_time + customer[0];
        }

        return static_cast<double>(total_wait_time) / customers.size();
        
    }
};