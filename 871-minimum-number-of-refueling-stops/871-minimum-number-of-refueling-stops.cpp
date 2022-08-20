class Solution {
public:
    int minRefuelStops(int target, int start, vector<vector<int>>&nums) 
    {
        int i=0;
        int res=0;
        multiset<int,greater<int>>m;
        int ans=0;
        while(start<target)
        {
            ans++;
            while(i<nums.size() and nums[i][0]<=start)
            {
                m.insert(nums[i++][1]);
            }
            if(m.empty()) return -1;
            start+=*m.begin();
            m.erase(m.begin());
        }
        return ans;
    }
};