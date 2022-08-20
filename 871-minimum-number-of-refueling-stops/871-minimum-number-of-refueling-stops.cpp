class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
      vector<long long> dp = { startFuel };
      for (const auto& station : stations) {
         dp.push_back(0);
         for (int i = dp.size() - 1; i > 0 && dp[i - 1] >= station[0]; i--) 
            dp[i] = max(dp[i], dp[i - 1] + station[1]);
      }
      return target > dp.back() ? -1 : lower_bound(dp.begin(), dp.end(), target) - dp.begin();
   }
};