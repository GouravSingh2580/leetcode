class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        reverse(s.begin(),s.end());
        string z=to_string(x);
        if(z==s){
            return true;
        }
        else{
            return false;
        }
    }
};