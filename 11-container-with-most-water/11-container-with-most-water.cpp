class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=size(h)-1;
        int ans=INT_MIN;
        while(l<r){
            int h1=h[l], h2=h[r];
            int water=min(h1,h2)*(r-l);
            
            if(water>ans) ans=water;
            
            if(h1>=h2) r--;
            if(h2>=h1) l++;
        }
        return ans;
    }
};