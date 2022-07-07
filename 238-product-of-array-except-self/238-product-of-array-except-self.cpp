class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        int f=1;
        int flag=0;
        for(auto i:n) {if(i) f*=i; else flag++;}
        
        vector<int>d(size(n),0);
        if(flag>1) return d;
        
        vector<int>v;
        for(auto i:n){
            if(flag && i)
                v.push_back(0);
            else if(i)
                v.push_back(f/i);
            else
                v.push_back(f);
        }
        return v;
    }
};