class Solution {
public:
    int plus(int num){
        int k=num;
        int s=0;
        while(k){
            s+=k%10;
            k=k/10;
        }
        return s;
    }
    int addDigits(int num) {
        string s= to_string(num);
        if(s.size()==1){
            return stoi(s);
        }
        return addDigits( plus(num) );
    }
};