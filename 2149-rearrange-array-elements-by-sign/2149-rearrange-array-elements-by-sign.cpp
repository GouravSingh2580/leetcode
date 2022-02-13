class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>minus;
        vector<int>plus;
        
        for(int i=0;i<nums.size();i++){
            nums[i]>0 ? plus.push_back(nums[i]) : minus.push_back(nums[i]);
        }
        int k=0,kk=0;
        for(int i=0;i<nums.size();i++){
            i%2==0 ? nums[i] = plus[k++] : nums[i] = minus[kk++];
        }
        return nums;
    }
};