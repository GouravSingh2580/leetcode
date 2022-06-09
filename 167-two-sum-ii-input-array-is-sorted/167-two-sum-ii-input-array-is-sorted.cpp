class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        map<int,int>mp;
        for(auto i:n) mp[i]++;
        for(int i=0;i<n.size();i++){
            if(mp[target-n[i]]){
                for(int j=i+1;j<n.size();j++){
                    if(target-n[i]==n[j]) return {i+1,j+1};
                }
            }
        }
        return n;
    }
};