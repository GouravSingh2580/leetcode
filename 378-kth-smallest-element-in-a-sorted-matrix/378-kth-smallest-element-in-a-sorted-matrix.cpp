class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        multiset<int>s;
        for(auto i:m){
            for(auto j:i){
                s.insert(j);
            }
        }
        int kk=0;
        for(auto i:s){
            kk++; if(kk==k) return i;
        }
        return 0;
    }
};