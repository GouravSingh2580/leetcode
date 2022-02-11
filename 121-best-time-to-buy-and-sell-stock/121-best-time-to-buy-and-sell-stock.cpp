class Solution {
public:
    int maxProfit(vector<int>& p) {
        int minc=INT_MAX;
        int maxc=INT_MIN;
        for(int i=0;i<p.size();i++){
            minc=min(minc,p[i]);
            maxc=max(maxc,p[i]-minc);
        }
        return maxc;
    }
};