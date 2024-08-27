class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1,
                                  vector<string>& list2) {
        int min_index = numeric_limits<int>::max(), index;
        vector<string> vec;

        for (int i = 0; i < list1.size(); i++) {
            if (find(list2.begin(), list2.end(), list1[i]) != list2.end()) {
                index = i + find(list2.begin(), list2.end(), list1[i]) -
                        list2.begin();
                if (index < min_index) {
                    min_index = index;
                    vec.clear();
                    vec.push_back(list1[i]);
                } else if (index == min_index) {
                    min_index = index;
                    vec.push_back(list1[i]);
                }
            }
        }

        return vec;

        // for(int i=0;i<list1.size();i++)
        // {
        //     for(int j=0;j<list2.size();j++)
        //     {
        //         if(list1[i]==list2[j]) {
        //             index = i+j;
        //             if(index < min_index) {
        //                 min_index = index;
        //                 vec.clear();
        //                 vec.push_back(list1[i]);
        //             }
        //             else if(index == min_index) {
        //                 min_index = index;
        //                 vec.push_back(list1[i]);
        //             }
        //         }
        //     }
        // }

        // return vec;
    }
};