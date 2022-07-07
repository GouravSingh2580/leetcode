class Solution {
public:
    
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int> > memo(s1.size()+5, vector<int>(s2.size()+5, 0));
        if (s1.size() + s2.size() != s3.size()) return false;
        return helper(s1, s2, s3, 0, 0, memo);
    }
    
    bool helper(string& a, string &b, string &c, int i, int j,
                vector<vector<int> >& memo) {
        int k = i + j;
        if (k>=c.size()) return true;
        if (memo[i][j] == 1) {
            return false;
        }
        memo[i][j] = 1;
        if (a[i] == c[k] && b[j] != c[k]) {
            return helper(a, b, c, i+1, j, memo);
        } 
        if (b[j] == c[k] && a[i] != c[k]){
            return helper(a, b, c, i, j+1, memo);
        } 
        if (a[i] == c[k] && b[j] == c[k]) {
            return helper(a, b, c, i+1, j, memo) 
                || helper(a, b, c, i, j+1, memo);
        } 
        return false;
    }
};