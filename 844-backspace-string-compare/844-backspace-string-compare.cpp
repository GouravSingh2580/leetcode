class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string S,T;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                S+=s[i];
            }
            else{
                if(S.size()>0) S.pop_back();
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                T+=t[i];
            }
            else{
                if(T.size()>0) T.pop_back();
            }
        }
        if(S==T) return true;
        else return false;
    }
};