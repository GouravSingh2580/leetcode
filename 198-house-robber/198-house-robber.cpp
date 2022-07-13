class Solution {
public:
    int dp(vector<int>v,int n,vector<int>&ap){
        if(n<0) return 0;
        if(ap[n]!=-1) return ap[n];
    
        return ap[n]=max(v[n]+dp(v,n-2,ap),dp(v,n-1,ap));
    }
    int rob(vector<int>& n) {
        vector<int>ap(size(n)+1,-1);
        return dp(n,size(n)-1,ap);
    }
};