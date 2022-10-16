class Solution {
public:
    const int INF = 1e8;

    int minDifficulty(const vector<int>& C, int D) {
        int N = C.size();
        vector<int> DP(N + 1, INF), old;
        DP[0] = 0;

        for (int d = 0; d < D; ++d) {
            old = DP;
            fill(DP.begin(), DP.end(), INF);

            multiset<int> cands;
            vector<array<int, 2>> st;
            for (int i = 0; i < N; ++i) {
                int val = old[i];
                // Merge intervals, maintaining the set of overall costs.
                while (!st.empty() && st.back()[1] <= C[i]) {
                    val = min(val, st.back()[0]);
                    cands.erase(cands.find(st.back()[0] + st.back()[1]));
                    st.pop_back();
                }
                if (val < INF) {
                    st.push_back({val, C[i]});
                    cands.insert(val + C[i]);
                }
                if (!cands.empty()) DP[i + 1] = *cands.begin();
            }
        }
        return DP[N] == INF ? -1 : DP[N];
    }
};