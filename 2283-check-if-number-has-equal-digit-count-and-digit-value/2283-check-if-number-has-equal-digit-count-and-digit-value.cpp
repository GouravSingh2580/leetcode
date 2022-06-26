class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>mp;
        vector<int>v;
        int k=0;
        for(auto i:num){
            v.push_back(i-'0');
        }
        for(auto i:v) mp[i]++;
        for(auto i:v){
            if(!mp[k] && i!=0) return false;
            for(auto j:mp){
                if(j.first==k){
                    if(j.second!=i) return false;
                }
            } k++;
        }
        return true;
    }
};