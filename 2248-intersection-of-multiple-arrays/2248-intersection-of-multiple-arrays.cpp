class Solution {
public:
    vector<int> vector_to_vec(vector<int>v){
        sort(begin(v),end(v));
        return v;
    }
    vector<int> intersect(vector<int>a, vector<int>b){
        sort(begin(a),end(a));
        sort(begin(b),end(b));
        
        vector<int>v;
        set_intersection(begin(a),end(a),begin(b),end(b),back_inserter(v));
        
        return v;
    }
    vector<int> intersection(vector<vector<int>>& n) {
        if(n.size()==1) return vector_to_vec(n[0]);
        
        vector<int>v=intersect(n[0],n[1]);
        
        for(int i(2);i<n.size();i++){
            v=intersect(v,n[i]);
        }
        
        return vector_to_vec(v);
    }
};