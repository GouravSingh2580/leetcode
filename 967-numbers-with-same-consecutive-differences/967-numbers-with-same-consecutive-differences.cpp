class Solution {
public:
    vector<int> numsSameConsecDiff(int N, int K) {
        if(N == 1) return {0,1,2,3,4,5,6,7,8,9};

        deque<int> q = {1,2,3,4,5,6,7,8,9};
        while(--N) {
            for(int sz = q.size(); sz > 0; sz--) {
                int n = q.front(); q.pop_front();
                for (int j = 0; j < 10; ++j)
                    if(abs((n % 10) - j) == K)
                        q.push_back(n * 10 + j);
            }
        }

        return vector<int>(q.begin(), q.end());
    }
};