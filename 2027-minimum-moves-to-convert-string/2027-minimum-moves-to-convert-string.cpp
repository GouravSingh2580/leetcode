class Solution {
public:
    int minimumMoves(string s) {
        int c=0;
        for(int i=0;i<s.size();){
            if(s[i]=='O') i++;
            else {
                c++; i+=3;
            }
        }
        return c;
    }
};