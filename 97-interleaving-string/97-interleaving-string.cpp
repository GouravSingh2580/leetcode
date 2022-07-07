class Solution {
public:
    unordered_map<string,bool> mp;
    bool abc(string s1, string s2, string s3,int i,int j,int k)
    {
        if(s1.empty() && s2.empty() && s3.empty()) return true;
        if(s3.empty()) return false;
        
        string str=s1+"|"+s2+"|"+s3;
        if(mp.count(str)) return mp[str];
        
        bool a;
        a=(!s3.empty() && s1[0]==s3[0]) && abc(s1.substr(1),s2,s3.substr(1),++i,j,++k);
        bool b;
        b=(!s3.empty() && s2[0]==s3[0]) && abc(s1,s2.substr(1),s3.substr(1),i,++j,++k);
        
        return mp[str]= a or b;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size()) return false;
        if(s1.empty() or s2.empty() && s1+s2==s3) return true;
        else if(s1.empty() or s2.empty() && s1+s2!=s3) return false;
        else return abc(s1,s2,s3,0,0,0);
    }
};
