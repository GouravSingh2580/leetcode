class Solution {
public:
    int partitionString(string s) {
        int count = 1;
        unordered_map<char, int> mp;
        for(auto &it: s) {
            if(mp[it]) {
                count += 1;
                mp.clear();
            }
            mp[it] += 1;
        }
        return count;
    }
};