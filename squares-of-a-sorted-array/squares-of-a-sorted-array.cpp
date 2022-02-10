class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) {
        for(int i=0;i<n.size();i++){
            n[i]=n[i]*n[i];
        }
        sort(n.begin(),n.end());
        return n;
    }
};