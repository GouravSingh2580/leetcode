class Solution {
public:
    int fc(vector<int>& arr, int k, int x) {
        vector<pair<int,int> > vpi(arr.size());
        for(int i = 0; i<arr.size(); i++)vpi[i] = {abs(arr[i]-x), arr[i]};
        stable_sort(vpi.begin(), vpi.end());
        vector<int> ans;
        for(int i=0; i<k; i++)ans.push_back(vpi[i].second);
        int aa=ans[0];
        return aa;
    }
    int searchInsert(vector<int>& n, int t) {
        int low=0;
        int high=n.size()-1;
        int k=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(n[mid]==t){
                return mid;
            }
            if(n[mid]<t){
                low=mid+1;
            }
            if(n[mid]>t){
                high=mid-1;
            }
            
            k=mid;
        }
        return low;
    }
};