class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        set<int>st;
        vector<int>v;
        for(auto i:n) {st.insert(i);}
        for(auto i:st) v.push_back(i);
        n=v;
        return st.size();
    }
};