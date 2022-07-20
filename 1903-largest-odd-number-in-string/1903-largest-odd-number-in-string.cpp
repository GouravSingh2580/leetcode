class Solution {
public:
    string largestOddNumber(string n) {
        int ans=0;
        int idx=-1;
        for(int i=n.size()-1;i>=0;i--){
            if((n[i]-'0')%2) {idx=i;break;}
        }
        return (n.substr(0,idx+1));
    }
};