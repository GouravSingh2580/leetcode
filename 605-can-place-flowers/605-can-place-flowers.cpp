class Solution {
public:
    int cc=0;
    int call(vector<int> &a,int i,vector<int>&dp)
    {
        if(i>=a.size() || i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        
        if(a[i]==1) return dp[i]= call(a,i+1,dp);
        else if(i==0 && a[i+1]==0 or i==a.size()-1 && a[i-1]==0){
            a[i]=1; cc++;
            return dp[i]= call(a,i+1,dp)+1;
        }
        else if(i-1>=0 && i+1<a.size() && a[i-1]==0 && a[i+1]==0){
            a[i]=1; cc++;
            return dp[i]= call(a,i+1,dp)+1;
        }
        else return dp[i]= call(a,i+1,dp);
    }
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(f.size()==1 && f[0]==0 && n<=1) return true;
        else if (f.size()==1 && f[0]==1 && n>0) return false;
        vector<int>dp(size(f)+1,-1);
        cout<<call(f,0,dp)<<" "<<cc<<endl;
        return call(f,0,dp)>=n ? true : false;
    }
};