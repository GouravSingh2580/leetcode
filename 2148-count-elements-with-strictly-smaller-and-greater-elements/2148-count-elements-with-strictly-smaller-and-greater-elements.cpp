class Solution {
public:
    int countElements(vector<int>& n) {
        int m1=INT_MIN;
        int m2=INT_MAX;
        
        for(int i=0;i<n.size();i++){
            m1=max(m1,n[i]);
            m2=min(m2,n[i]);
        }
        int c=0;
        for(int i=0;i<n.size();i++){
            if(n[i]<m1 && n[i]>m2){
                c++;
            }
        }
        return c;
    }
};