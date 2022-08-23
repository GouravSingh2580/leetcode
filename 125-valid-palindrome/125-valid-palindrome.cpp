class Solution {
public:
    bool isp(string s){
        int l=0;
        int r=s.size()-1;
        
        while(l<r){
            if(s[l++]!=s[r--]) return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string t;
        for(auto i:s) if(isalpha(i) or isxdigit(i)) t+=tolower(i);
        cout<<t;
        return isp(t);
    }
};