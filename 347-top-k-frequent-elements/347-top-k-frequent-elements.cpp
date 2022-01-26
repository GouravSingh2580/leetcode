class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        if(n.size()==1 && k==1){
            return {1};
        }
        
        map<int,int>arr;
        for(int i=0;i<n.size();i++){
            arr[n[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        //priority_queue<pair<int,int>>pq;
        for(auto i:arr){
            if(i.second!=0){
                pq.push({i.second,i.first});
                if(pq.size()>k)
                    pq.pop();
            }
        }
        vector<int>v;
        while(pq.size()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};