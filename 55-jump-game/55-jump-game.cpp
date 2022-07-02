class Solution {
public:
    bool canJump(vector<int>& n) {
        int l=size(n)-1;
        for(int i=size(n)-1;i>=0;i--){
            if(i+n[i]>=l) l=i;
        }
        return l==0;
    }
};