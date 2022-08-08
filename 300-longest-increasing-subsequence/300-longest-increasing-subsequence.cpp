class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        multiset<int> s;
        for(auto& num:nums)
        {
            s.insert(num);
            auto it = s.find(num);
            ++it;
            if(it != s.end()) s.erase(it);
        }
        return s.size();
    }
};