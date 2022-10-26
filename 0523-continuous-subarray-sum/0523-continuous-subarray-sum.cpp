class Solution {
public:
    bool checkSubarraySum(vector<int>& arr, int k) {
        
        
        if(arr.size()<2) return false;
        if(k==1) return true;
        int f=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==0 && arr[i+1]==0) f=1;
            if(arr[i]==0 && arr[i+1]%k==0) f=1;
            if(arr[i]%k==0 && arr[i+1]==0) f=1;
        }
        
        set<int>st;
        for(auto i:arr) st.insert(i);
        
        if(st.size()==1 && arr[0]==k) return true;
        if(f) return true;
        int n=arr.size();
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.count(sum%k)){
                if(i-mp[sum%k]>=2) return true;
            }
            mp[sum%k]=i;
        }
        return false;
    }
};