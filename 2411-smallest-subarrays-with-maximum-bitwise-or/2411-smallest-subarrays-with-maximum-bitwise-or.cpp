using ll = long long;
struct SegTree {
  ll n;
  vector<int> t;
  SegTree(ll _n) : n(_n), t(2 * n) {}
  int query(ll l, ll r) {
    int res = 0;
    for (l += n, r += n; l < r; l /= 2, r /= 2) {
      if (l & 1) res |= t[l++];
      if (r & 1) res |= t[--r];
    }
    return res;
  }
};

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = int(nums.size());
        SegTree seg(n);
        for(int i=0;i<n;i++)seg.t[i+n]=nums[i];
        for(int i=n-1;i;i--)seg.t[i] = seg.t[i*2] | seg.t[i*2+1];
        vector<int> res(n);
        for(int i=0;i<n;i++){
            int l=i+1, r=n;
            int t = seg.query(i, n);
            while(l<r){
                int mid = (l+r)/2;
                if (seg.query(i, mid)!=t){
                    l=mid+1;
                }else{
                    r=mid;
                }
            }
            res[i] = r-i;
        }
        return res;
    }
};
