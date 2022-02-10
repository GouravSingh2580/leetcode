class Solution {
public:
    bool iseven(int n){
        int res=0;
        while(n){
            n=n/10;
            res++;
        }
        if(res%2) return false;
        else return true;
    }
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(iseven(nums[i])){
                c++;
            }
        }
        return c;
    }
};