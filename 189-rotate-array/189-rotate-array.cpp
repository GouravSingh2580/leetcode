class Solution {
public:
    void rotate(vector<int>& n, int k) {
        k=k%n.size();
        if(k<0){
            k=k+n.size();
        }
        reverse(n.begin(),n.end()-k);
        reverse(n.end()-k,n.end());
        reverse(n.begin(),n.end());
    }
};