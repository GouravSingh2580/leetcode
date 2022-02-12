class Solution {
public:
    int minimumCost(vector<int>& c) {
        sort(c.begin(),c.end());
        reverse(c.begin(),c.end());
        
        int s=0;
        for(int i=0;i<c.size();i++){
            if((i+1)%3!=0){
                s+=c[i];
            }
        }
        return s;
    }
};