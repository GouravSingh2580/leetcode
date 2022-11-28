class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int>w,l;
        unordered_map<int,int>mpforW,mpforL;
        for(auto i:matches){
            mpforW[i[0]]++;
            mpforL[i[1]]++;
        }
        for(auto i:matches){
            if(mpforL[i[1]]==1){
                l.insert(i[1]);
            }
            if(!mpforL.count(i[0])){
                w.insert(i[0]);
            }
        }
        vector<int>W,L;
        for(auto i:w) W.push_back(i);
        for(auto i:l) L.push_back(i);
        return {W,L};
    }
};