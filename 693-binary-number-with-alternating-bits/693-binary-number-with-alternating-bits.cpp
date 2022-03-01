class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32>b(n);
        string s=b.to_string();
        int pos=0;
        while(s[pos]=='0'){
            ++pos;
        }

        s.erase(0,pos);
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) return false;
        }
        return true;
    }
};