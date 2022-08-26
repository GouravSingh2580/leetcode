class Solution {
public:
    vector<string>f;
    bool permute(string s){
        do{
            f.push_back(s);
            
            if(s[0]!='0' and isPowerOfTwo(stoll(s))) return true;
            
            // for(auto i:s) cout<<i<<" ";
            // cout<<endl;
        } while(next_permutation(s.begin(),s.end()));
        
        
        sort(s.begin(),s.end()); reverse(s.begin(),s.end());
        
        do{
            f.push_back(s);
            
            if(s[0]!='0' and isPowerOfTwo(stoll(s))) return true;
            
            // for(auto i:s) cout<<i<<" ";
            // cout<<endl;
        } while(prev_permutation(s.begin(),s.end()));
        
        return false;
    }
    bool isPowerOfTwo(int x)
    {
        return x && (!(x&(x-1)));
    }
    bool reorderedPowerOf2(int n) {
        return permute(to_string(n));
        // for(auto i:f) {
        //     if(i[0]!='0' and isPowerOfTwo(stoll(i))) return true;
        // }
        // return false;
    }
};