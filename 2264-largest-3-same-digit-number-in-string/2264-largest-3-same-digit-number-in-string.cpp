class Solution {
public:
    string largestGoodInteger(string n) {
        int ans=0;
        int f=1;
        for(int i=0;i<n.size();i++){
            if(n[i]==n[i+1] && n[i+1]==n[i+2]) {
                ans=max(ans,(n[i]-'0')*100 + (n[i+1]-'0')*10 + (n[i+2]-'0')); f=0;
            }
        }
        if(f) return "";
        return to_string(ans)=="0" ? "000": to_string(ans) ;
    }
};