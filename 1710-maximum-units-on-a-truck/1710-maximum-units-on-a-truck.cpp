class Solution {
public:
    static bool c(vector<int>a,vector<int>b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& b, int t) {
        sort(begin(b),end(b),c);
        int ans=0;
        for(auto i:b){
            if(t){
                int x=min(i[0],t);
                ans=ans+x*i[1];
                t-=x;
            }
        }
        return ans;
    }
};