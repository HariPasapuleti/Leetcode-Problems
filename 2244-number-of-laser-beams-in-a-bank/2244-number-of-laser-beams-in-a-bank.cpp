class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        // string bank;
        int result_count = 0, prev_count = 0;
        
        for(int i = 0; i < bank.size(); i++)
        {
            string current_binary = bank[i];
            // if(bank[i+1]) string next_binary = bank[i+1];
            int current_count = 0;

            for(char c : current_binary)
            {
                if(c == '1') current_count++;
            }

            if(i != 0)
            {
                result_count += current_count * prev_count;
            }
            if(current_count > 0) prev_count = current_count;
            

        }
        return result_count;
    }
};