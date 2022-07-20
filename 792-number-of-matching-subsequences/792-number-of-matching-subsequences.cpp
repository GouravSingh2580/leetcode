class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<int,int> a;
        int i,j,k,ans=0;
        for(i=0;i<s.size();++i)
        {
            ++a[s[i]-'a'];
        }
        vector<int> z[27];
        for(i=0;i<s.size();++i)
        {
            z[s[i]-'a'].push_back(i);
        }
        
        for(i=0;i<words.size();++i)
        {
            k=-1;
            int flag=0;
            for(j=0;j<words[i].size();++j)
            {
                if(a[words[i][j]-'a']==0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    int p=k;
                    for(int x=0;x<z[words[i][j]-'a'].size();++x)
                    {
                        if(k<z[words[i][j]-'a'][x])
                        {
                            k=z[words[i][j]-'a'][x];
                            break;
                        }
                    }
                    if(p==k)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                ++ans;
            }
        }
        return ans;
    }
};