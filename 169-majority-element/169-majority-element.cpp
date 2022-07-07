class Solution {
public:
    int majorityElement(vector<int>& n) {
        map<int,int>mp;
        priority_queue<int>pq;
        for(auto i:n) mp[i]++;
        
        for(auto i:mp){
            pq.push(i.second);
        }
        for(auto i:mp){
            if(i.second==pq.top()) return i.first;
        }
        return -1;
    }
};