class Solution {
public:
    int findKthLargest(vector<int>& n, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n.size();i++){
            pq.push(n[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};