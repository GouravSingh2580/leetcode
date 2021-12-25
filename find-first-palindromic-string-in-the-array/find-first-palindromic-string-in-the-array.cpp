class Solution {
public:
    bool isp(string s,int x,int y){
        if(x==y){
            return true;
        }
        if(s[x]!=s[y]){
            return false;
        }
        if(x<y+1){
            return isp(s,x+1,y-1);
        }
        return true;
    }
    string firstPalindrome(vector<string>& w) {
        for(int i=0;i<w.size();i++){
            if(isp(w[i],0,w[i].size()-1)){
                return w[i];
            }
        }
        return "";
    }
};