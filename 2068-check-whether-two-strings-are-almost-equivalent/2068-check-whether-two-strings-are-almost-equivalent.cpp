class Solution {
public:
    bool checkAlmostEquivalent(string w1, string w2) {
        map<char,int>mp1,mp2;
        for(auto i:w1) mp1[i]++;
        for(auto i:w2) mp2[i]++;
        
        for(auto i:mp2){
            if(abs(mp1[i.first]-i.second)>3) return false; 
        }
        for(auto i:mp1){
            if(abs(mp2[i.first]-i.second)>3) return false; 
        }
        return true;
    }
};