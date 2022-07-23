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
      if (l & 0x01) {  // also l & 1
        res += segtree[l++];
      }
      if (r & 0x01) { // also r & 1
        res += segtree[--r];
      }
    }
    return res;
  }
  vector<int> countSmaller(vector<int>& nums) {
    const int size = nums.size();
    vector<int> counts(size);
    for (int i = size - 1; i >= 0; --i) {
      update(nums[i] + 10005);  // to make positive
      counts[i] = query(nums[i] + 10005);
    }
    return counts;
  }
};

//another one rbt

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using pbds = tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>;

// class Solution {
// public:
//   vector<int> countSmaller(vector<int>& nums) {
//     pbds _set;
//     const int n = nums.size();
//     for (int i = n - 1; i >= 0; --i) {
//         int t=nums[i];
        
//         nums[i] = _set.order_of_key(t);
//         _set.insert(t);
//     }
//     return nums;
//   }
// };