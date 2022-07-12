class Solution {
public:
    bool dp(vector<int>&m, int n, int a, int b, int c, int d){
        if(a==0 && b==0 && c==0 && d==0) return true;
        if(a<0 or b<0 or c<0 or d<0) return false;
        
        bool f=(dp(m,n-1,a-m[n],b,c,d) or dp(m,n-1,a,b-m[n],c,d) or dp(m,n-1,a,b,c-m[n],d) or dp(m,n-1,a,b,c,d-m[n]));
        
        if(f) return true;
        else return false;
    }
    bool makesquare(vector<int>& m) {
        sort(begin(m),end(m));
        long long s=0;
        for(auto i:m) s+=i;
        if(s%4) return false;
        else return dp(m,size(m)-1,s/4,s/4,s/4,s/4);
    }
};