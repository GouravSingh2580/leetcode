class Solution {
 public:
  int trap(vector<int>& a) {
    int n = a.size();
    vector<int> p(n);
    vector<int> q(n);
    p[0] = a[0];
    q[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++) {
      p[i] = max(p[i - 1], a[i]);
    }
    for (int i = n - 2; i >= 0; i--) {
      q[i] = max(q[i + 1], a[i]);
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
      ans += (min(p[i], q[i]) - a[i]);
    }
    return ans;
  }
};