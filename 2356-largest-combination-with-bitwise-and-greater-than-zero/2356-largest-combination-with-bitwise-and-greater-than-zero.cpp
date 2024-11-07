class Solution {
public:
    int largestCombination(vector<int>& candidates) {

        // int max_size=0;
        // vector<int> ds;
        // combinations(0,candidates, ds, max_size);

        // return max_size;

        int max_count=0;
        for(int i=0;i<32;i++)
        {
            int count=0;
            for(int cand:candidates)
            {
                if((cand & (1<<i))!=0) count++;
            }
            max_count=max(max_count,count);
        }
        return max_count;
        
    }

    // void combinations(int index, vector<int>& c, vector<int>& ds, int& max_size)
    // {
    //     if(index>=c.size()){
    //         // if(ds.size()>max_size) max_size=ds.size();
    //         if(ds.size()==0) return;
    //         int k=ds[0];
    //         for(int i=1;i<ds.size();i++)
    //         {
    //             k=k&ds[i];
    //         }
    //         if(k!=0) {
    //             if(ds.size()>max_size) max_size=ds.size();
    //         }
    //         return;
    //     }
    //     ds.push_back(c[index]);
    //     // cout<<ds[index];
    //     combinations(index+1, c,ds, max_size);

    //     ds.pop_back();
    //     combinations(index+1, c, ds, max_size);
    // }
};