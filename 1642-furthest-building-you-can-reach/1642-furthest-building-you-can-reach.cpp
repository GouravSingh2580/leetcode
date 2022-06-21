class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<size(h)-1;i++){
            int diff=h[i+1]-h[i];
            if(diff>0){
                pq.push(diff);
            }
            if(pq.size()>l){
                b-=pq.top();
                pq.pop();
            }
            if(b<0){
                return i;
            }
        }
        return size(h)-1;
    }
};