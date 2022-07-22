class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1;i<s.size();i+=2){
            char t=s[i-1];
            s[i]=t+(s[i]-'0');
        }
        return s;
    }
};