class Solution {
public:
    vector<vector<int>> mp;
    int call(vector<int>&nums,vector<int>&M,int i,int j)
    {
        if(i==M.size()) return 0;
        
        if(mp[i][j]!=INT_MIN) return mp[i][j];
        
        int s1,s2,e=(nums.size()-1)-(i-j);
        
        s1=(M[i]*nums[j])+call(nums,M,i+1,j+1);
        
        s2=(M[i]*nums[e])+call(nums,M,i+1,j);
        
        mp[i][j]=max(s1,s2);
        // cout<<mp[i][j];
        return mp[i][j];
    }
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int n = nums.size();
        int m = mul.size();
        mp.assign(1001,vector<int>(1001,INT_MIN));
        return call(nums,mul,0,0);
    }
};