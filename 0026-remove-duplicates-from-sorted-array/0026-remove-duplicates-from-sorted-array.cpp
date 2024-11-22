class Solution {
public:
    int removeDuplicates(vector<int>& vec) {

        int k=0;

        for(int i=0;i<vec.size();i++)
        {
            if(vec[k]==vec[i]) continue;
            else {
                vec[++k]=vec[i];
            }
        }
        return k+1;
    }
};