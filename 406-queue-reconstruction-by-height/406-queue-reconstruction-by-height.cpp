class Solution {
public:
    static bool c(vector<int>& a, vector<int> & b)
    {
        if(a[0] == b[0])
            return a[1] < b[1];
        return a[0] > b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        sort(begin(p),end(p),c);
        vector<vector<int>> res;
        for(int i = 0; i < p.size(); i++){
            res.insert(res.begin()+p[i][1], p[i]);
        }
        return res;
    }
};