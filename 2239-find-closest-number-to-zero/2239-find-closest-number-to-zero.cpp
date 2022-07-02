class Solution {
public:
    int findClosestNumber(vector<int>& n) {
        vector<int>neg;
        for(auto i:n){
            if(i<0) neg.push_back(i);
        }
        vector<int>pos;
        for(auto i:n){
            if(i>=0) pos.push_back(i);
        }
        sort(begin(pos),end(pos));
        sort(begin(neg),end(neg),greater<int>());
        
        if(size(pos)==0){
            return neg[0];
        }
        else if(size(neg)==0){
            return pos[0];
        }
        if(abs(neg[0])==pos[0]){
            return pos[0];
        }
        int ans= min(abs(neg[0]),pos[0]);
        if(ans==-neg[0]) return neg[0];
        else return pos[0];
    }
};