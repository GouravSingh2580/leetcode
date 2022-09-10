class Solution {
    map<tuple<int, int, bool>, int> memo;  // day, trans, bought
public:
    int maxProfit(int k, vector<int>& prices, int day = 0, bool bought = false) {
        if (k == 0 || day >= prices.size()) return 0;
        if (auto it = memo.find({ day, k, bought }); it != end(memo)) return it->second;
        
        int result = max({
            bought ? maxProfit(k - 1, prices, day + 1, !bought) + prices[day] : 
                maxProfit(k, prices, day + 1, !bought) - prices[day],   // sell / buy
			maxProfit(k, prices, day + 1, bought),                  // no trans
        });                        
                
        return memo[{ day, k, bought }] = result;
    }
};