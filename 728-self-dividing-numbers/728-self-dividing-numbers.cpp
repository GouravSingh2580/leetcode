class Solution {
public:
    bool s(int n){
        int t=n;
        vector<int>v;
        while(t){
            v.push_back(t%10);
            t=t/10;
        }
        for(auto i:v){
            if(i==0) return false;
            if(n%i!=0) return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            if(s(i)){
                v.push_back(i);
            }
        }
        return v;
    }
};