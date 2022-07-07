class Solution {
public:
    int strStr(string h, string n) {
        for(int i=0;i<size(h);i++){
            // cout<<h.substr(i,size(n))<<" ";
            if(h.substr(i,size(n))==n) return i;
        }
        return -1;
    }
};