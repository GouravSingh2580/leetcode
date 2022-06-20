class Solution {
public:
    static bool c (string& first, string& second) {
        return first.size() > second.size();
    }
    int minimumLengthEncoding(vector<string>& w) {
        sort(w.begin(),w.end(),c);
        string s;
        for(auto i:w){
            if(s.find(i+'#')==string::npos){
                s+=i+'#';
            }
        }
        return s.size();
    }
};