class Solution {
public:
    bool isPerfectSquare(int num) {
        int f=pow(num,0.5);
        
        if(f*f==num) return true;
        else return false;
    }
};