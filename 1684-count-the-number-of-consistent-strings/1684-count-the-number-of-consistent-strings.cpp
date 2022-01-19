class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {
        set<char>s;
        for(auto ch:a){
            s.insert(ch);
        }
        int c=0;
        for(auto x:w){
            int f=0;
            for(auto ch:x){
               const bool in=s.find(ch)!=s.end();
                if(in){
                    f=1;
                }
                else{
                    f=0;
                    break;
                }
            }
            if(f){
                c++;
            }
        }
        return c;
    }
};