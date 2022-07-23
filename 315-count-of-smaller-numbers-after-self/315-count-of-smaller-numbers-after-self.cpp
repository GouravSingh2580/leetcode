#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using pbds = tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution {
public:
  vector<int> countSmaller(vector<int>& nums) {
    pbds _set;
    const int n = nums.size();
    for (int i = n - 1; i >= 0; --i) {
        int t=nums[i];
        
        nums[i] = _set.order_of_key(t);
        _set.insert(t);
    }
    return nums;
  }
};