class Solution {
public:
    unordered_map<string,bool> mp;
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.empty() && s2.empty() && s3.empty()) return true;
        if(s3.empty()) return false;
        
        string str=s1+"|"+s2+"|"+s3;
        if(mp.count(str)) return mp[str];
        
        bool f= (!s3.empty() && s1[0]==s3[0]) && isInterleave(s1.substr(1),s2,s3.substr(1));
        bool s= (!s3.empty() && s2[0]==s3[0]) && isInterleave(s1,s2.substr(1),s3.substr(1));
        
        return mp[str]=f or s;
    }
};
