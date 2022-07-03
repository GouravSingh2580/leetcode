class Solution {
public:
    int wiggleMaxLength(vector<int>& n) {
        int x1=1,x2=1;
        for(int i=1;i<size(n);i++){
            if(n[i-1]<n[i]) x1=x2+1;
            if(n[i-1]>n[i]) x2=x1+1;
        }
        return max(x1,x2);
    }
};