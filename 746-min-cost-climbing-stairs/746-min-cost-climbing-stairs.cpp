// time O(n) +  space O(n)
// 使用了记忆化递归，避免了重复计算。用于记忆化的数组本身占用O(n)时间复杂度

// 题目定义为：跳到第n阶台阶需要花多少钱
class Solution {
 private:
  int recursion(vector<int> &cost, vector<int> &memo, int n) {
      if (n <= 1) return 0; // 可以理解为，从未知的地方跳到第0或者第1阶台阶不花钱
      if (memo[n]) return memo[n];
      memo[n] = min(recursion(cost, memo, n - 1) + cost[n - 1], recursion(cost, memo, n - 2) + cost[n - 2]);
	  // 跳到第n阶台阶的价钱 = min(跳到第n-1阶台阶价钱 + 第n-1阶台阶自身的价钱，或者跳到第n-2阶台阶价钱 + 第n-2阶台阶自身的价钱)
      return memo[n];
  }

 public:
  int minCostClimbingStairs(vector<int> &cost) {
      int n = cost.size();
      vector<int> memo(n + 1, 0);
      return recursion(cost, memo, n);
  }
};