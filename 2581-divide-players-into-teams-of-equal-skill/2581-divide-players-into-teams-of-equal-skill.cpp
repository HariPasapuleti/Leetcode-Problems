class Solution {
public:
    long long dividePlayers(vector<int>& skill) {

        long long sum=0,n=skill.size();
        for(int i=0;i<n;i++)
        {
            sum+=skill[i];
        }
        long long div=sum/(n/2),product=0;
        
        // cout << div << " " << sum;
        sort(skill.begin(),skill.end());
        for(int i=0;i<n/2;i++)
        {
            if((skill[i]+skill[n-i-1])==div){
                product+=(skill[i]*skill[n-i-1]);
            }
            else {
                return -1;
            }
        }
        return product;
    }

    // long long division(vector<int> &skill, int sum,int product)
    // {
        // if(sum==0){
        //     product;
        // }

        // for(int i=0;i<skill.size();i++)
        // {
        //     division(skill[i],sum-skill[i],1)
        
        // }
        // return product;
    // }
};