class Solution {
public:
    int s(int v){
        int t=v,d=0;
        while(t){
            d=d+(t%10);
            t=t/10;
        }
        return d;
    }
    int maximumSum(vector<int>& n) {
        map<int,multiset<int>>mp;
        for(auto i:n) {
            int t=s(i); mp[t].insert(i);
        }
        
        int ans=-1;
        for(auto i:mp){
            multiset<int>st=i.second;
            if(st.size()>=2){
                auto i=st.end();
                i--;
                int v1=*i;
                i--;
                int v2=*i;
                i--;
                ans=max(ans,v1+v2);
            }
        }
        return ans;
    }
};