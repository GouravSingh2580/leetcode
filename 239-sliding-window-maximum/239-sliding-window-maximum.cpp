class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& n, int k) {
        vector<int> v;
        set<pair<int, int>> s;
        for(int i = 0; i < n.size(); i ++){
            s.insert({ n[i], i });
            if(s.size() > k) s.erase({ n[i-k], i-k });
            if(s.size() == k) v.push_back(s.rbegin()->first); 
        }
        return v;
    }
};