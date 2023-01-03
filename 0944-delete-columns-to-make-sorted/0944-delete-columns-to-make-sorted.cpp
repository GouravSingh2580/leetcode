class Solution {
public:
    bool sidhi(string s){
        string t=s;
        sort(s.begin(),s.end());
        return t==s;
    }
    int minDeletionSize(vector<string>& strs) {
        unordered_map<int,vector<char>>v;
        for(auto i:strs){
            int c=0;
            for(auto j:i){
                v[c++].push_back(j);
            }
        }
        int res=0;
        for(auto i:v){
            string s;
            for(auto j:i.second) s+=j;
            
            if(!sidhi(s)) res++;
        }
        return res;
    }
};