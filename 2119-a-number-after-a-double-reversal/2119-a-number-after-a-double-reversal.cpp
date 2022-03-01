class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num>=0 && num<=9){
            return true;
        }
        else{
            string s=to_string(num);
            int t=stoi(s);
            cout<<s<<" "<<t;
            if(t<num || s[s.size()-1]=='0'){
                return false;
            }
            else{
                return true;
            }
        }
    }
};