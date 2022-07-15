class Solution {
public:
    bool squareIsWhite(string c) {
        // odd and aceg or even and bdfh
        map<char,int>mp1,mp2;
        
        string aceg="aceg";
        for(auto i:aceg) mp1[i]++;
        string bdfh="bdfh";
        for(auto i:bdfh) mp2[i]++;
        
        if(c[1]%2 and mp1[c[0]] or c[1]%2==0 and mp2[c[0]]) return false;
        else return true;
    }
};