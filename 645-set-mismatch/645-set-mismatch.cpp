class Solution {
public:
    vector<int> findErrorNums(vector<int>& n) {
        int xoz=0;
        int maxe=n.size();
        for(int i=1;i<=maxe;i++) xoz^=i;
        
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