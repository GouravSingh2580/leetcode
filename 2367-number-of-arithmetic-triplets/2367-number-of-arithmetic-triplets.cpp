class Solution {
public:
    int arithmeticTriplets(vector<int>& n, int diff) {
        int c=0;
        for(int i=0;i<n.size();i++){
            for(int j=0;j<n.size();j++){
                for(int k=0;k<n.size();k++){
                    if(i<j && j<k && n[j]-n[i]==diff && n[k]-n[j]==diff) c++;
                }
            }
        }
        return c;
    }
};