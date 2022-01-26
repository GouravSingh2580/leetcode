class Solution {
public:
    vector<int> rearrangeArray(vector<int>& n) {
        vector<int>pp;
        vector<int>nn;
        for(auto i:n){
            if(i>=0){
                pp.push_back(i);
            }
            else{
                nn.push_back(i);
            }
        }
        vector<int>z;
       for(int i=0;i<n.size()/2;i++){
           z.push_back(pp[i]);
           z.push_back(nn[i]);
       }
        return z;
    }
};