class Solution {
public:
    vector<string>v;
    void split(string s){
        istringstream ss(s);
        string word;
        
        while(ss>>word) v.push_back(word);
    }
    static bool c(string a, string b){
        return a.back()-'0'<b.back()-'0';
    }
    string sortSentence(string s) {
        split(s);
        sort(begin(v),end(v),c);
        
        string ans;
        for(auto i:v) ans+=(i.substr(0,i.size()-1)), ans+=" ";
        
        ans.pop_back();
        
        return ans;
    }
};