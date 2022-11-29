class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>&b) {
        return a[1] < b[1];
    }
    int findLongestChain(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),cmp);
        int c=0;
        int minimum=INT_MIN;
        for(auto i:p){
            if(minimum<i[0]){
                minimum=i[1]; c++;
            }
        }
        return c;
    }
};