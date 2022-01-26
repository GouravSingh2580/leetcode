class Solution {
public:
    int search(vector<int>& n, int target) {
        int low=0;
        int high=n.size()-1;
        
        while(low<=high){
            int mid=low+ (high-low)/2;
            
            if(n[mid]==target)
            {
                return mid;
            }
            if(n[mid]<target){
                low=mid+1;
            }
            if(n[mid]>target){
                high=mid-1;
            }
        }
        return -1;
    }
};