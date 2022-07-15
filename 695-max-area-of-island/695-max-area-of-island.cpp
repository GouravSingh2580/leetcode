class Solution {
public:
    int call(vector<vector<int>> &a,int i,int j,int n,int m)
    {
        if(i>=n||j>=m||a[i][j]==0) return 1;
        int z=0,b=0,c=0,d=0;
        if(j+1<m && a[i][j+1]==1){
            a[i][j]=0;
            z=call(a,i,j+1,n,m);
        }
        if(i+1<n && a[i+1][j]==1){
            a[i][j]=0;
            b=call(a,i+1,j,n,m);
        }
        if(i-1>=0 && a[i-1][j]==1){
            a[i][j]=0;
            c=call(a,i-1,j,n,m);
        }
        if(j-1>=0 && a[i][j-1]==1){
            a[i][j]=0;
            d=call(a,i,j-1,n,m);
        }
        // else{
            a[i][j]=0;
            return 1+z+b+c+d;
        // }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int i,j,z,k=0,n=grid.size(),m=grid[0].size();
        // cout<<n<<" "<<m<<"\n";
        for(i=0;i<n;++i)
        {
            for(j=0;j<m;++j)
            {
                if(grid[i][j]==1)
                {
                    z=1;
                    z=call(grid,i,j,n,m);
                    cout<<z<<" "<<i+1<<" "<<j+1<<"\n";
                    // if(n!=m) 
                        // ++z;
                    if(k<z)
                    {
                        k=z;
                    }
                }
            }
        }
        return k;
    }
};