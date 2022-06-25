class Solution {
public:
    bool checkPossibility(vector<int>& n) {
        vector<int>t=n;
        if(is_sorted(n.begin(),n.end())) return true;
        for(int i=0;i<size(t);i++){
            t.erase(t.begin()+i);
            // for(auto i:t) cout<<i<<" ";
            // cout<<endl;
            if(is_sorted(t.begin(),t.end())) return true;
            else t=n;
        }
        return false;
    }
};