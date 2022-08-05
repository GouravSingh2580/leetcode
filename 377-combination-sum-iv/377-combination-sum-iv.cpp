class Solution {
public:
//     int sol(vector<int>&v, int n , int t){
//         if(t==0) return 1;
//         if(t<0) return 0;
//         if(n<=0) return 0;
        
//         return sol(v,n-1,t)+sol(v,n,t-v[n-1]);
//     }
    map<int, int> mp;
    int combinationSum4(vector<int>& n, int t) {
        if (t == 0) return 1;
        if (t < 0) return 0;
        
        if (mp.count(t)) return mp[t];
        int res = 0;
        for (auto i : n) {
            res += combinationSum4(n, t - i);
        }
        return mp[t]=res;
    }
};