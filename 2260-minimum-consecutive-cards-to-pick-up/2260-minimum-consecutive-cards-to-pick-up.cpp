class Solution {
public:
    int minimumCardPickup(vector<int>& c) {
        for(int i=0;i<c.size()-1;i++){
            if(c[i]==c[i+1]) return 2;
        }
        int ans=INT_MAX;
        unordered_map<int,int>mp;
        for(int i=0;i<c.size();i++){
            if(mp.count(c[i])>0) //always remember
                ans=min(ans,abs(i-mp[c[i]])+1);
            mp[c[i]]=i;
        }
        return ans==INT_MAX ? -1 : ans;
    }
};