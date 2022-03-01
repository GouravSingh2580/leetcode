class Solution {
public:
    int findbits(int n){
        int c=0;
        string s=bitset<32> (n).to_string();
        for(auto i:s){
            if(i=='1'){
                c++;
            }
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
            v.push_back(findbits(i));
        }
        return v;
    }
};