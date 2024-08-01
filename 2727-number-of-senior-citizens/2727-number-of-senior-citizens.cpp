class Solution {
public:
    int countSeniors(vector<string>& details) {

        int age, old_passengers = 0;
        string age_str = "";
        for (int i = 0; i < details.size(); i++) {
            string age_str = "";
            age_str += details[i][11];
            age_str += details[i][12];

            age = stoi(age_str);
            if (age > 60) {
                old_passengers++;
            }
        }
        return old_passengers;
    }
};