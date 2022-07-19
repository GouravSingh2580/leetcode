class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> res;
        int k = 1;

        while (k <= n) {
            vector<int> level;
            level.emplace_back(1);
            if (k > 1) {
                for (int i = 1; i < (k - 1); i++)
                    level.emplace_back(res[k - 2][i - 1] + res[k - 2][i]);
                level.emplace_back(1);
            }
            res.emplace_back(level);
            k++;
        }

        return res;
    }
};