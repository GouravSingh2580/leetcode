class Solution {
public:
    bool is_equal(vector<int>n){
        set<int>st;
        for(auto i:n) st.insert(i);
        if(st.size()==1 && n[0]==0) return true;
        else return false;
    }
    int low(vector<int>v){
        multiset<int>m;
        for(auto i:v) if(i!=0) m.insert(i);
        
        return *m.begin();
    }
    void sol(vector<int>&n){
        vector<int>v;
        int m=low(n);
        for(auto i:n) if(i!=0) v.push_back(i-m);
        n.clear(); n=v;
        
        for(auto i:n) cout<<i<<" ";
        cout<<endl;
    }
    int c=0;
    int minimumOperations(vector<int>& n) {
        for(int i=0;i<10e5;i++){
            if(is_equal(n)) break;
            else {
                c++; sol(n);
            }
        }
        return c;
    }
};