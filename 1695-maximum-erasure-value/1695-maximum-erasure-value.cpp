class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int curr_sum=0, ans=0;
        set<int> st;
        
        int i=0,j=0;
        while(j<nums.size()) {
            while(st.count(nums[j])>0) {
                st.erase(nums[i]);
                curr_sum-=nums[i];
                i++;
            }
            curr_sum+=nums[j];
            st.insert(nums[j++]);
            ans = max(ans, curr_sum);
        }
        return ans;
    }
};