#define ll long long
int mod = pow(10, 9) + 7;
class Solution {
public:
    map <int, ll> memo;
    int numFactoredBinaryTrees(vector<int>& arr) {
        int count = 0;
        multiset <int> lst(arr.begin(), arr.end());
        for (auto x : lst) {
            if (x != 0) {
                for (auto y : lst) {
                    if (x == y) { memo[x]++; break; }
                    if (x % y == 0 && memo.find(x / y) != memo.end()) {
                        memo[x] += (memo[x / y] * memo[y]) % mod;
                    }
                }
                count += memo[x]%mod;
                count %=  mod;
            }
        }
        return count;
    }
};
