class Solution {
public:
    int z=0;
    int plus(int n){
        int k=n;
        int s=0;
        while(k){
            s+=(k%10)*(k%10);
            k=k/10;
        }
        return s;
    }
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        z++;
        if(z>pow(2,n)){
            return false;
        }
        return isHappy( plus(n) );
    }
};