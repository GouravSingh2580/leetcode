class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        multiset<int> ms;
        ms.insert(nums[0]);
        for(int i = 1; i < n; i++)
        {
            if(ms.size()>k) ms.erase(ms.find(nums[i-k-1]));
            nums[i] = nums[i] + *ms.rbegin();;
            ms.insert(nums[i]);
        }
        return nums[n-1];
    }
};