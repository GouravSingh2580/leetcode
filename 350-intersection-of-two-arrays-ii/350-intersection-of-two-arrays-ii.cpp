class Solution {
public:
    // int min(int a,int b){
    //     return a>b ? b: a;
    // }
    vector<int> intersect(vector<int>& n1, vector<int>& n2) {
        map<int,multiset<int>>mp;
        for(auto i:n1) mp[i].insert(i);
        map<int,int>mp1;
        vector<int>v;
        for(auto i:n2) mp1[i]++;
        for(auto i:mp1){
            // if(mp.find(i.first)!=mp.end()){
            
                int t=min((int)i.second,(int)mp[i.first].size());
                // cout<<i.second<<" "<<mp[i.first].size()<<endl;
                while(t--) v.push_back(i.first);
            // }
        }
        return v;
    }
};