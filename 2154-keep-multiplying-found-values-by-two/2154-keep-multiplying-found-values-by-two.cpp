class Solution {
public:
    int findFinalValue(vector<int>& n, int o) {
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();i++){
            if(n[i]==o){
                o=o*2;
            }
        }
        return o;
    }
};