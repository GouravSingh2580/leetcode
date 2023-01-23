template<typename T> ostream& operator<< (ostream& out, const vector<T>& v) {
        out << "{";
        size_t last = v.size() - 1;
        for(size_t i = 0; i < v.size(); ++i) {
            out << v[i];
            if (i != last) 
                out << ", ";
        }
        out << "}";
        return out;
    }
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_map<int,int>mp;
        unordered_map<int,vector<int>>dp;
        for(auto &i:trust){
            mp[i[0]]++;
            dp[i[1]].push_back(i[0]);
        }
        for(auto &i:trust){
            // cout<<i.first<<" "<<i.second<<endl;
            if(mp.count(i[1])<1) {
                if(dp[i[1]].size()==n-1) return i[1];
            }
        }
        return -1;
    }
};