class Solution {
public:
    int getLucky(string s, int k) {
        string z;
        for(int i=0;i<s.size();i++){
            z+=to_string(s[i]-96);
        }
       // cout<<z;
        int res=0;
        int ans=0;
        while(k--){
        for(int i=0;i<z.size();i++){
            res+=(z[i])-'0';
        }
            z=to_string(res);
            ans=res;
            res=0;
        }
        return ans;
    }
};