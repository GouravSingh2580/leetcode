class Solution {
public:
    bool util(vector<int>& m, int s1, int s2, int s3, int s4, int n){
        if(s1==0 && s2==0 && s3==0 && s4==0){
            return true;
        }
        if(s1<0 || s2<0 || s3<0 || s4<0){
            return false;
        }
        if(util(m,s1-m[n],s2,s3,s4,n-1) || util(m,s1,s2-m[n],s3,s4,n-1) 
           || util(m,s1,s2,s3-m[n],s4,n-1) || util(m,s1,s2,s3,s4-m[n],n-1)){
            return true;
        }
        return false;
    }
    bool makesquare(vector<int>& m) {
        long long s=0;
        sort(begin(m),end(m));
        for(int i=0;i<m.size();i++)
            s+=m[i];
        if(s%4!=0)
            return false;
        else
            return util(m,s/4,s/4,s/4,s/4,m.size()-1);
    }
};