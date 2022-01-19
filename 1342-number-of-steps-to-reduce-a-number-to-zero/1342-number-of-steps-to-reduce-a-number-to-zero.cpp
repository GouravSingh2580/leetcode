class Solution {
public:
    int numberOfSteps(int num) {
        int k=0;
        while(num!=0){
            if(num%2==0){
                num/=2;
            }
            else
            {
                num--;
            }k++;
        }
        return k;
    }
};