class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        int low=0;
        int high=n.size()-1;

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
        }
        return low;
    }
};