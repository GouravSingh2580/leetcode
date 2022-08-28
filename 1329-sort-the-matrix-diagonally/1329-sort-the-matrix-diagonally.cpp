class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        if(mat.empty())
            return mat;
        int m = (int)mat.size(), n = int(mat[0].size());
        map<int, multiset<int>> map;
        for(int i = 0; i < m; ++i)
            for(int j = 0; j < n; ++j)
                map[i - j].insert(mat[i][j]);
        for(int i = 0; i < m; ++i)
            for(int j = 0; j < n; ++j)
                mat[i][j] = *map[i - j].begin(), map[i - j].erase(map[i - j].begin());
        return mat;
    }
};