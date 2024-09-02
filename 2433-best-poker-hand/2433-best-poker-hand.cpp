class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {

        unordered_map<int, int> ranks_map;
        unordered_map<char, int> suits_map;

        for (int i = 0; i < 5; i++) {
            ranks_map[ranks[i]]++;
            suits_map[suits[i]]++;
        }

        for (auto suit : suits_map) {
            if (suit.second == 5)
                return "Flush";
        }

        int max_count = 0;
        for (auto rank : ranks_map) {
            max_count = max(max_count, rank.second);
        }

        if (max_count >= 3)
            return "Three of a Kind";
        else if (max_count == 2)
            return "Pair";
        else
            return "High Card";
    }
};