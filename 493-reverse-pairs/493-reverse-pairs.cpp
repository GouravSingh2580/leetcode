#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
class Solution {
public:
typedef tree<int, null_type, less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> pbd;
    int mergesort(vector<int>&nums,int lo,int hi){
        if(lo>=hi) return 0;
        int mid = (hi+1-lo)/2+lo;
        int cnt=mergesort(nums,lo,mid-1)+mergesort(nums,mid,hi);
        int x=mid;
        for(int i = lo;i<mid;i++){
            while(x<=hi && (long)nums[i]>2*(long)nums[x]) x++;
            cnt+=(x-mid);
        }
        inplace_merge(nums.begin()+lo,nums.begin()+mid,nums.begin()+hi+1);
        return cnt;
    }
    int reversePairs(vector<int>& n) {
        pbd _set;
        int c=0;
        for(int i=n.size()-1;i>=0;i--){
            long long t=n[i];
            if(t%2LL) t++;
            c+=_set.order_of_key(t/2LL);
            cout<<_set.order_of_key(t/2LL)<<endl;
            _set.insert(n[i]);
        }
        return c;
    }
};