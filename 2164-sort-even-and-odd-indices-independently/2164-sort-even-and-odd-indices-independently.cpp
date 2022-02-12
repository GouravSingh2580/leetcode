class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& n) {
        vector<int>odd;
        vector<int>even;
        
        for(int i=0;i<n.size();i++){
            if(i%2==0){
                even.push_back(n[i]);
            }
            else{
                odd.push_back(n[i]);
            }
        }
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        
        vector<int>ans(0,n.size());
        
        for(int i=0,j=0,k=0;i<n.size();i++){
            if(i%2==0){
                ans.push_back(even[j]);
                j++;
            }
            else{
                ans.push_back(odd[k]);
                k++;
            }
        }
        return ans;
    }
};