class Solution {
public:
    int lengthOfLIS(vector<int>& n) {
        vector<int>res;
        for(auto i:n){
            auto j=lower_bound(res.begin(),res.end(),i);
            if(j==res.end()) res.push_back(i);
            else *j=i;
        }
        return res.size();
    }
};