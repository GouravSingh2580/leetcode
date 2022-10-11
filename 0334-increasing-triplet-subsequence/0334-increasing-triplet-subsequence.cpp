#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
class Solution {
public:
    typedef tree<int, null_type, less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> pbd;
    bool increasingTriplet(vector<int>& nums) {
        vector<int>pre;
        vector<int>suff;
        int x=INT_MAX, y=INT_MIN;
        for(int i=0;i<nums.size();i++){
            x=min(x,nums[i]);
            pre.push_back(x);
        }
        for(int i=nums.size()-1;i>=0;i--){
            y=max(y,nums[i]);
            suff.push_back(y);
        }
        reverse(suff.begin(),suff.end());
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pre[i] and nums[i]<suff[i]) return true;
        }
        return false;
    }
};