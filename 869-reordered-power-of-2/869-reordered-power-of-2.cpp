class Solution {
public:
    bool permute(string s) {
        do{
            if(s[0]!='0' and isPowerOfTwo(stoll(s))) return true;
        } while(next_permutation(s.begin(),s.end()));
        
        sort(s.begin(),s.end()); reverse(s.begin(),s.end());
        
        do{
            if(s[0]!='0' and isPowerOfTwo(stoll(s))) return true;
        } while(prev_permutation(s.begin(),s.end()));
        return false;
    }
    bool isPowerOfTwo(int x) {
        return x && (!(x&(x-1)));
    }
    bool reorderedPowerOf2(int n) {
        return permute(to_string(n));
    }
};