class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes,
                                  vector<vector<string>>& ingredients,
                                  vector<string>& supplies) {
        unordered_set<string> available(supplies.begin(), supplies.end());
        queue<int> recipeQueue;
        for (int i = 0; i < recipes.size(); i++) {
            recipeQueue.push(i);
        }

        vector<string> createdRecipes;
        int lastSize = -1;
        while (static_cast<int>(available.size()) > lastSize) {
            lastSize = available.size();
            int queueSize = recipeQueue.size();

            while (queueSize-- > 0) {
                int recipeIdx = recipeQueue.front();
                recipeQueue.pop();
                bool canCreate = true;

                for (auto ingredient : ingredients[recipeIdx]) {
                    if (!available.count(ingredient)) {
                        canCreate = false;
                        break;
                    }
                }

                if (!canCreate) {
                    recipeQueue.push(recipeIdx);
                } else {
                    available.insert(recipes[recipeIdx]);
                    createdRecipes.push_back(recipes[recipeIdx]);
                }
            }
        }
        return createdRecipes;
    }
};