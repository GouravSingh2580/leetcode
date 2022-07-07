class Solution {
public:
    int removeElement(vector<int>& n, int val) {
        int sz=size(n),c=0;
        for(int i=0;i<sz;i++) {
            if(n[i]!=val) {n.emplace_back(n[i]);c++;}
        }
        reverse(begin(n),end(n));
        for(int i=0;i<size(n);i++){
            cout<<n[i]<<" ";
            n.pop_back();
            // n.erase(begin(n)+i+1);
        }
        return c;
    }
};