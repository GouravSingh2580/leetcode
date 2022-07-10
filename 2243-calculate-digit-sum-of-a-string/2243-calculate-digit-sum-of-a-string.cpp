class Solution {
public:
    string doit(string s){
        long long int ans=0;
        for(auto i:s){
            ans+=(i-'0');
        }
        return to_string(ans);
    }
    string something(string s,int k){
        string f;
        for(int i=0;i<size(s);i+=k){
            f+=doit(s.substr(i,k));
        }
        return f;
    }
    string digitSum(string s, int k) {
        if(size(s)<k) return s;
        if(size(s)==k) return s;
        return something(s,k).size()==k? something(s,k) : digitSum(something(s,k),k);
    }
};