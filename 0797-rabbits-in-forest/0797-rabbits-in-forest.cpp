class Solution {
public:
    int numRabbits(vector<int>& answers) {
        sort(answers.begin(), answers.end());
        int res = answers[0] + 1, count = answers[0];
        for (int i = 1; i < answers.size(); i++) {
            if (answers[i] == 0)
                res++;
            else if (answers[i] != answers[i - 1] || count == 0) {
                res += answers[i] + 1;
                count = answers[i];
            } else
                count--;
        }
        return res;
    }
};