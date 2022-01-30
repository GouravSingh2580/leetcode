class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int low=0;
        int high=n.size()-1;
        while(low<high){
            int sum=n[low]+n[high];
            
            if(sum==t){
                return {low+1,high+1};
            }
            if(sum<t){
                low++;
            }
            if(sum>t){
                high--;
            }
        }
        return {};
    }
};