class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        multiset<int,greater<int>>st;
        for(auto i:arr) mp[i]++;
        
        for(auto i:mp) st.insert(i.second);
        
        int sum=0,cnt=0,n=arr.size();
        for(int x:st){
            sum+=x;
            cnt++;
            if(sum>=n/2) break;
        }
        return cnt;
    }
};