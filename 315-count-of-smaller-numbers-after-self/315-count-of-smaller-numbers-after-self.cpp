class Solution {
public:
  int segtree[40020]{};
  int n = 10005;
  void update(int val) {
    segtree[val + n * 2]++;
    for (int i = n * 2 + val; i > 1; i >>= 1) {
      segtree[i >> 1] = segtree[i] + segtree[i ^ 1]; 
    }
  }
  int query(int val) {
    int res = 0;
    for (int l = n * 2, r = val + n * 2; l < r; l >>= 1, r >>= 1) {
      if (l & 1) {  // also l & 0x01
        res += segtree[l++];
      }
      if (r & 1) { // also r & 0x01
        res += segtree[--r];
      }
    }
    return res;
  }
  vector<int> countSmaller(vector<int>& nums) {
    const int size = nums.size();
    vector<int> counts(size);
    for (int i = size - 1; i >= 0; --i) {
      update(nums[i] + 10005);
      counts[i] = query(nums[i] + 10005);
    }
    return counts;
  }
};