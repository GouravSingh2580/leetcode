class Solution {
public:
    vector<int> findErrorNums(vector<int>& n) {
        int maxe=n.size();
        vector<int>dp {0,1,maxe+1,0,maxe};
        int xoz=dp[((maxe-1)%4) +1];
        
        set<int>st;
        for(auto i:n) st.insert(i);
        
        for(auto i:st) xoz^=i;
        for(auto i:n){
            int c=count(begin(n),end(n),i);
            if(c>1) return {i,xoz};
        }
        return {};
    }
};