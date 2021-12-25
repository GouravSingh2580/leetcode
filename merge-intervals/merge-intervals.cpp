class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<pair<int,int>>v;
        for(int i=0;i<in.size();i++){
            for(int j=0;j<in[i].size()-1;j++){
                v.push_back({in[i][j],in[i][j+1]});
            }
        }
        sort(v.begin(),v.end());
        
        stack<pair<int,int>>s;
        s.push({v[0].first,v[0].second});
        for(int i=1;i<v.size();i++){
            int s1=s.top().first;
            int e1=s.top().second;
            
            int s2=v[i].first;
            int e2=v[i].second;
            
            if(e1<s2){
                s.push({s2,e2});
            }
            else{
                s.pop();
                e1=max(e1,e2);
                s.push({s1,e1});
            }
        }
        // while(!s.empty()){
        //     cout<<s.top().first<<" "<<s.top().second<<endl;
        //     s.pop();
        // }
        vector<vector<int>>ans;
        ans.resize(s.size());
        int i=0;
        while(!s.empty()){
            ans[i].push_back(s.top().first);
            ans[i].push_back(s.top().second);
            i++;
            s.pop();
        }
        return ans;
    }
};