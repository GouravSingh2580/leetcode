
class segment{
    vector<int> seg;
    public:
    segment(int n){
        seg.assign(4*n,0);
    }
    void buildMin(int node,int l,int r,vector<int>&a){
        if(l==r){
            seg[node]=a[l];
            return;
        }
        int mid=(l+r)>>1;
        buildMin(2*node+1,l,mid,a);
        buildMin(2*node+2,mid+1,r,a);
        seg[node]=min(seg[2*node+1],seg[2*node+2]);
    }
    int queryMin(int node,int l,int r,int ql,int qr){
        if(ql<=l and r<=qr){
            return seg[node];
        }
        if(ql>r or qr<l){
            return INT_MAX;
        }
        int mid=(l+r)>>1;
        int lef=queryMin(2*node+1,l,mid,ql,qr);
        int ri=queryMin(2*node+2,mid+1,r,ql,qr);
        return min(lef,ri);
    }
    void buildMax(int node,int l,int r,vector<int>&a){
        if(l==r){
            seg[node]=a[l];
            return;
        }
        int mid=(l+r)>>1;
        buildMax(2*node+1,l,mid,a);
        buildMax(2*node+2,mid+1,r,a);
        seg[node]=max(seg[2*node+1],seg[2*node+2]);
    }
    int queryMax(int node,int l,int r,int ql,int qr){
        if(ql<=l and r<=qr){
            return seg[node];
        }
        if(ql>r or qr<l){
            return INT_MIN;
        }
        int mid=(l+r)>>1;
        int lef=queryMax(2*node+1,l,mid,ql,qr);
        int ri=queryMax(2*node+2,mid+1,r,ql,qr);
        return max(lef,ri);
    }
};
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        segment *mn=new segment(n+10);
        segment *mx=new segment(n+10);
        mn->buildMin(0,0,n-1,nums);
        mx->buildMax(0,0,n-1,nums);
        for(int i=0;i<n;i++){
            int mini=mn->queryMin(0,0,n-1,0,i-1);
            int maxi=mx->queryMax(0,0,n-1,i+1,n-1);
            if(mini<nums[i] and nums[i]<maxi){
                return true;
            }
        }
        return false;
    }
};