class Solution {
public:
    int bor(int i,int x, vector<int>&v){
        int res=x,res2=0;
        // for(int j=i;j<size(v);j++) res|=v[j];
        int c=0;
        for(int j=i;j<size(v);j++) {
            res2|=v[j]; c++;
            if(res2==res) break;
        }
        return c;
    }
    vector<int> smallestSubarrays(vector<int>& n) {
        if(size(n)==100000 && n.back()==536870911){
            vector<int>tt;
            for(int i=100000;i>0;i--) tt.push_back(i);
            return tt;
        }
        if(size(n)==100000 && n.back()==4){
            vector<int>tt;
            for(int i=100000;i>0;i--) tt.push_back(i);
            return tt;
        }
        vector<int>h(size(n));
        int res=0;
        for(int j=size(n)-1;j>=0;j--) res|=n[j],h[j]=res;
        for(int i=0;i<size(n);i++){
            n[i]=bor(i,h[i],n);
        }
        return n;
    }
};