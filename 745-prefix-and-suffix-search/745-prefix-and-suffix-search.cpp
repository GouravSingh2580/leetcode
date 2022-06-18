class WordFilter {
private:
    unordered_map<string,int>mp;
public:
    WordFilter(vector<string>& w) {
        int idx=0;
        for(auto &i:w){
            int s=i.size();
            for(int m=0;m<=s;m++){
                for(int j=0;j<=s;j++){
                    mp[i.substr(0,m) +"|"+ i.substr(j,s)]=idx;
                }
            }
            idx++;
        }
    }
    int f(string prefix, string suffix) {
        string p= prefix + "|" + suffix;
        return mp.count(p) ? mp[p] : -1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */