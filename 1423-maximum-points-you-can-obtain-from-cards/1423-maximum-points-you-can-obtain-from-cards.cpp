class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        vector<int>p(k+1);
        vector<int>s(k+1);
        int ans=0;
        for(int i=1;i<=k;i++){
            p[i]=p[i-1]+v[i-1];
        }
        for(int i=1;i<=k;i++){
            s[i]=s[i-1]+v[v.size()-i];
        }
        for(int i=0;i<=k;i++){
            ans=max(ans,p[i]+s[k-i]);
        }
        return ans;
    }
};