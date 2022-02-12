class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        string t=s;
        
        if(s.size()%k!=0)
        for(int i=0;i<(k- s.size()%k);i++){
            t+=fill;
        }
        
        vector<string>ans;
        int x=0,y=k;
        for(int i=0;i<t.size()/k;i++){
            ans.push_back(t.substr(x,y));
            x=x+k;
        }
        return ans;
    }
};