class Solution {
public:
    int avg;
    bool call(vector<int>&z,int n,int a,int b,int c,int d)
    {
        if(a==avg && b==avg && c==avg && d==avg ) return true;
        if(a>avg || b>avg || c>avg || d>avg ) return false;
        if(n<0) return false;
        bool f = call(z,n-1,a+z[n],b,c,d) or call(z,n-1,a,b+z[n],c,d) or call(z,n-1,a,b,c+z[n],d) or call(z,n-1,a,b,c,d+z[n]);
        if(f) return true;
        return false;
        
    }
    bool makesquare(vector<int>& m) {
        sort(m.begin(),m.end());
        int i,j=0,k=0,x=m[0],a=0;
        for(i=0;i<m.size();++i)
        {
            k+=m[i];
            if(x!=m[i]) j=1;
        }
        avg=k/4;
        // cout<<avg<<"\n"<<m.size();
        if(j==0)
        {
            return m.size()%4==0?true:false;
        }
        return k%4==0?call(m,m.size()-1,0,0,0,0):false;
    }
};