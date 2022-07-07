class Solution {
public:
    
    bool dp(string s1,string s2,string s3,int i,int j,int k,vector<vector<int >>&m){
        
        if(m[i][j]!=-1) return m[i][j];
        
        if(i==s1.length() && j==s2.length() && k==s3.length()) return true;

        bool x=(i<s1.length()) && (s1[i]== s3[k]) && dp(s1,s2,s3,i+1,j,k+1,m);
        bool y=(j<s2.length()) && (s2[j]== s3[k]) && dp(s1,s2,s3,i,j+1,k+1,m);
        
        return m[i][j]=x or y;
    }
    bool isInterleave(string s1,string s2,string s3){
        int a=s1.length(),b=s2.length();
        vector<vector<int >>m(a+1,vector<int>(b+1,-1));
        return dp(s1,s2,s3,0,0,0,m);
    }
};