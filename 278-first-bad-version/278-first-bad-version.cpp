// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        int high=n;
        
        while(low<high){
            int mid=low + ( (high-low)>>1 );
            
            
            
            isBadVersion(mid) ? (high=mid) : (low=mid+1);
        }
        return high;
    }
};