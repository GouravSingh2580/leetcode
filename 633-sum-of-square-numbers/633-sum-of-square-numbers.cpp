class Solution {
public:
    #define ll long long
    bool issquare(ll n){
        if(n >= 0){
            ll num = sqrt(n);
            if(num*num == n) return true;
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        for(ll i = 0; i*i <= c; i++){
            ll formula = c - i*i; // c - y*y
            if(issquare(formula)) return true;
        }
        return false;
    }
};