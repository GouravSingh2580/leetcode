class Solution {
public:
    void expand(const string &s, string &best, int i, int j){
        while(i>=0 && j<size(s) && s[i]==s[j]){
            int len=j-i+1;
            if(len>size(best)){
                best=s.substr(i,len);
            }
            i--;
            j++;
        }
    }
    string longestPalindrome(string s) {
        string best="";
        for(int i=0;i<size(s);i++){
            expand(s,best,i,i);
            expand(s,best,i,i+1);
        }
        return best;
    }
};