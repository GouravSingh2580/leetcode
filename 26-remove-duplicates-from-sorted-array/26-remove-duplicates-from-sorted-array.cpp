class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        map<int,int>mp;
        set<int>st;
        vector<int>v;
        for(auto i:n) {mp[i]++;st.insert(i);}
        for(auto i:st) v.push_back(i);
        n=v;
        return st.size();
    }
};