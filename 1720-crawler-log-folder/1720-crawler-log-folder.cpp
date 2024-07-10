class Solution {
public:
    int minOperations(vector<string>& logs) {

        int back_operation_count = 0;
        for(int i = 0; i < logs.size(); i++)
        {
            if(logs[i] == "../") {
                if(back_operation_count == 0) continue;
                back_operation_count--;
            }
            else if(logs[i] == "./") {
                continue;
            }
            else {
                back_operation_count++;
            }
        }

        return back_operation_count;
    }
};