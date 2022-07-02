class Solution {
public:
    string removeDigit(string n, char d) {
        string ans;
        for(int i=0;i<size(n);i++){
            if(n[i]==d){
                ans=max(ans,n.substr(0,i)+n.substr(i+1));
            }
        }
        return ans;
    }
};