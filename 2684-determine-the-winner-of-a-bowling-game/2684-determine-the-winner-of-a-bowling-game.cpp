class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {

        int player1_score = player1[0], player2_score = player2[0];
        int i = 1;

        while (i < player1.size()) {
            
            if (player1[i - 1] == 10 || ((i > 1) && player1[i - 2] == 10))
                player1_score += 2 * player1[i];
            else
                player1_score += player1[i];

            if (player2[i - 1] == 10 || ((i > 1) && player2[i - 2] == 10))
                player2_score += 2 * player2[i];
            else
                player2_score += player2[i];

            i++;
        }
        if (player1_score > player2_score)
            return 1;
        else if (player1_score < player2_score)
            return 2;
        else
            return 0;
    }
};