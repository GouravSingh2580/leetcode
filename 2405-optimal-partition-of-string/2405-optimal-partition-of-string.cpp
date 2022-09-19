class Solution {
    int n;
    vector<int>dp;
    int partition(int i, string &s) {
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        
        vector<int>count(26);
        int ans = 1e9;
        for(int j = i; j < n; j++) {
            if(count[s[j] - 'a'] == 0) {
                count[s[j] - 'a']++;
                ans = min(ans, 1 + partition(j + 1, s));
            } else {
                break;
            }
        }
        return dp[i] = ans;
    }
public:
    int partitionString(string s) {
        dp.resize(100001,-1);
        n = s.length();
        int ans = partition(0, s);
        return ans;
    }
};