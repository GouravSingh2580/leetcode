class Solution {
public:
    unordered_map<char,int>mp1;
    bool isSub(string &s, string &w,unordered_map<string,bool>&mp){
        if(mp[w]) return true;    
        int j=0;
        int n1=s.size();
        int n2=w.size();
        for(int i=0;i<n1;i++){
            if(mp1[w[j]]==0) return false;
            if(s[i]==w[j]) {
                j++;
                if(j==n2){
                    mp[w]=true; return true;
                }
            }
        }
        mp[w]=false; 
        return false;
    }
    
    int numMatchingSubseq(string s, vector<string>& w) {
        unordered_map<string,bool>mp;
        for(int i=0;i<s.size();i++) mp1[s[i]]++;
        mp[s]=true;
        int ans=0;
        for(int i=0;i<w.size();i++){
            if(w[i].size()>s.size()) continue;
            else {
                if(isSub(s,w[i],mp)) ans+=1;
            }
        }
        return ans;
    }
};