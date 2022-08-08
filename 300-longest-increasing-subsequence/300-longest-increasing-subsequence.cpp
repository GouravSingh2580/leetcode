class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        multiset<int> s;
        for(auto& i:nums)
        {
            s.insert(i);
            auto it = s.find(i);
            ++it;
            if(it != s.end()) s.erase(it);
        }
        return s.size();
    }
};