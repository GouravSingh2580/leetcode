class Solution {
public:
    int partitionString(string s) {
        int count = 1;
        map<char, int> mp;
        for(auto i: s) {
            if(mp[i]) {
                count += 1; mp.clear();
            }
            mp[i] += 1;
        }
        return count;
    }
};