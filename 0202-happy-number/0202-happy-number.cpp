class Solution {
public:

    int getNumber(int k)
    {
        int temp=0;
        while(k>0)
        {
            temp+=(k%10)*(k%10);
            k/=10;
        }
        return temp;
    }

    bool isHappy(int n) {

        unordered_set<int> visit;

        while(visit.find(n)==visit.end())
        {
            visit.insert(n);
            n=getNumber(n);
            if(n==1) return true;
        }

        return false;
        
    }
};