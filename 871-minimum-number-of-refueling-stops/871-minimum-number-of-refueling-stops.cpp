class Solution {
public:
    int minRefuelStops(int target, int start, vector<vector<int>>&nums) 
    {
        int i=0;
        int res=0;
        multiset<int,greater<int>>m;
        int count=0;
        while(start<target)
        {
            count++;
            while(i<nums.size()&&nums[i][0]<=start)
            {
                m.insert(nums[i++][1]);
            }
            if(m.size()==0)
            {
                return -1;
            }
            start+=*m.begin();
            m.erase(m.begin());
        }
        return count;
    }
};