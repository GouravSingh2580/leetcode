class Solution {
public:
    vector<string> string_to_vector(string s){
        vector<string>v;
        for(auto i:s) v.push_back(string {i});
        
        return v;
    }
    string intersect(string a, string b){
        sort(begin(a),end(a));
        sort(begin(b),end(b));
        
        string ans;
        
        set_intersection(begin(a),end(a),begin(b),end(b),back_inserter(ans));
        return ans;
    }
    vector<string> commonChars(vector<string>& w) {
        if(w.size()==1) return string_to_vector(w[0]);
        
        string s=intersect(w[0],w[1]);
        
        for(int i(2);i<w.size();i++){
            s=intersect(s,w[i]);
        }
        
        return string_to_vector(s);
    }
};