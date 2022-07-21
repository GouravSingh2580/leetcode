class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        string ans;
        int f=1;
        for(auto i:s){
            if(i=='6' && f) {
                ans+='9'; f=0;
            }
            else ans+=i;
        }
        return stoll(ans);
    }
};