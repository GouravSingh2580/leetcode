class Solution {
public:
    vector<int> decode(vector<int>& e, int first) {
        vector<int>v;
        v.push_back(first);
        for(int i=0;i<e.size();i++){
            v.push_back(abs(e[i]^first));
            first=v[v.size()-1];
        }
        return v;
    }
};