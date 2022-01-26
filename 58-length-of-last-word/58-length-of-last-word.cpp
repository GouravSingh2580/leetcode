class Solution {
public:
    int lengthOfLastWord(string s) {
        int k=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                k++;
            }
            if(s[i]==' ' && k){
                break;
            }
        }
        return k;
    }
};