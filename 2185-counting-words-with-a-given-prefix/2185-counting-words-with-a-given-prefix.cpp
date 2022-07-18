class Solution {
public:
    bool sol(string a,string b){
        return (a.substr(0,b.size())==b) ? true : false;
    }
    int prefixCount(vector<string>& w, string p) {
        int c=0;
        for(auto i:w){
            if(sol(i,p)) c++;
        }
        return c;
    }
};