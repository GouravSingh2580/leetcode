class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<pair<int,int>>v;
        for(int i=0;i<in.size();i++){
            for(int j=0;j<in[i].size()-1;j++){
                v.push_back({in[i][j],in[i][j+1]});
                // cout<<in[i][j]<<" "<<in[i][j+1];
            }
        }
        sort(v.begin(),v.end());
        stack<pair<int,int>>s;
        s.push({v[0].first,v[0].second});
        int kk=0;
        for(int i=1;i<in.size();i++){
            int s1=s.top().first;
            int e1=s.top().second;
            
            int s2=v[i].first;
            int e2=v[i].second;
            
            if(e1<s2){
                s.push({s2,e2});kk++;
            }
            else{
                s.pop();
                e1=max(e1,e2);
                s.push({s1,e1});
            }
        }
        vector<vector<int>>p;
        int x=0,y=0;
        p.resize(s.size());
        
//         while(!s.empty()){
//             //y=0;
//             cout<<(s.top().first);
//             cout<<" "<<(s.top().second);
            
//             cout<<endl;
//            // x++;
//             s.pop();
//         }
        while(!s.empty()){
            y=0;
            p[x].push_back(s.top().first);
            p[x].push_back(s.top().second);
            
            //cout<<p[x][y]<<" "<<p[x][y+1]<<endl;
            x++;
            s.pop();
        }
        sort(p.begin(),p.end());
        // for(int i=0;i<p.size();i++){
        //     for(int j=0;j<p[i].size();j++){
        //         if(p[i][j]>0){
        //             p.erase(p.begin());
        //         }
        //     }
        // }
        return p;
    }
};