class Solution {
public:
    vector<string>f;
    void dp(string str)
    {
        istringstream ss(str);
        string word; // for storing each word
        while (ss >> word) 
        {
            f.push_back(word);
        }
    }
    bool sol(string s, string w){
        if(s.substr(0,w.size())==w) return true;
        else return false;
    }
    int isPrefixOfWord(string sent, string sw) {
        dp(sent);
        int k=1;
        for(auto i:f){
            if(sol(i,sw)) return k;
            k++;
        }
        return -1;
    }
};