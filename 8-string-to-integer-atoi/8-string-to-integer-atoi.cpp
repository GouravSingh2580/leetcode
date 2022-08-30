class Solution {
public:
    int myAtoi(string str) {
        stringstream geek(str); 
        int x=0;
        geek>>x;
        return x;
    }
};