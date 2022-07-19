class Solution {
public:
    int countWords(vector<string>& w1, vector<string>& w2) {
        unordered_map<string,int>mp,f;
        for(auto i:w1) mp[i]++;
        
        for(auto i:mp){
            if(i.second==1) f[i.first]++;
        }
        mp.clear();
        for(auto i:w2) mp[i]++;
        
        for(auto i:mp){
            if(i.second==1) f[i.first]++;
        }
        int ans=0;
        for(auto i:f){
            if(i.second==2) ans++;
        }
        
        return ans;
    }
};