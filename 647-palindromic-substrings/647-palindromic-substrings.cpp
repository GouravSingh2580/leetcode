class Solution {
public:
    bool isp(string s){
        if(s.size()==1) return true;
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    int countSubstrings(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            for(int j=1;j<=s.size()-i;j++){
                if(isp(s.substr(i,j))) c++;
            }
        }
        return c;
    }
};