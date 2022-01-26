class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        for(int i=0;i<a.size();i++){
            pq.push({abs(a[i]-x),a[i]});
            if(pq.size()>k)
                pq.pop();
        }
        while(pq.size()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        sort(v.begin(),v.end());
        return v;
    }
};