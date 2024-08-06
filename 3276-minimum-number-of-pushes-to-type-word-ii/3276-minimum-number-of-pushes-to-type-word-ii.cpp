class Solution {
public:
    int minimumPushes(string word) {

        unordered_map<char, int> hash_map;
        for(auto& str : word)
        {
            hash_map[str]++;
        }

        vector <pair<char, int>> vec(hash_map.begin(), hash_map.end());

        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b){
            return a.second < b.second;
        });

        size_t vec_size = vec.size();
        int min_pushes = 0;

        if(vec_size / 8 == 3) {
            int extra = vec_size % 8;
            for(int i=0;i<vec_size ;i++)
            {
                if(i < extra) {
                    min_pushes += vec[i].second*4;
                }
                else if(i < extra+8) {
                    min_pushes += vec[i].second*3;
                }
                else if(i < extra+16) {
                    min_pushes += vec[i].second*2;
                }
                else {
                    min_pushes += vec[i].second;
                }
            }

        }
        else if(vec_size / 8 == 2) {

            int extra = vec_size % 8;
            for(int i=0;i<vec_size ;i++)
            {
                if(i < extra) {
                    min_pushes += vec[i].second*3;
                }
                else if(i < extra+8) {
                    min_pushes += vec[i].second*2;
                }
                else {
                    min_pushes += vec[i].second;
                }
                
            }

        }
        else if(vec_size / 8 == 1) {
            int extra = vec_size % 8;
            for(int i=0;i<vec_size ;i++)
            {
                if(i < extra) {
                    min_pushes += vec[i].second*2;
                }
                else {
                    min_pushes += vec[i].second;
                }
            }

        }
        else {
            for(int i=0;i<vec_size;i++)
            {
                min_pushes += vec[i].second;
            }
        }

        return min_pushes;
        
    }
};