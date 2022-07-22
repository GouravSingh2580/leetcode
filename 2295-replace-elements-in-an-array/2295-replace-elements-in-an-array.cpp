class Solution {
public:
    vector<int> arrayChange(vector<int>& n, vector<vector<int>>& op) {
        map<int,int> mp;     //****store index of element in map
        for(int i =0;i<n.size();i++){
            mp[n[i]] = i;   //** use map to find the index 
        }
        for(auto i:op){
            int a  = i[0];
            int b = i[1];
            
            n[mp[a]] = b;
            
            mp[b] = mp[a];  //**also store the changed element in hashmap   
        }
        return n;
    }
};