class Solution {
public:
    string largestPalindromic(string num) {
        map<int,int>mp,mp1;
        for(auto i:num) mp[i-'0']++,mp1[i-'0']++;
        
        //find max number having even freq
        
        vector<int>v;
        for(auto i:num) v.push_back(i-'0');
        
        sort(v.begin(),v.end()); reverse(v.begin(),v.end());
        
        string s;
        map<int,int>hash;
        for(auto i:v){
            if(mp[i]>=2 && !hash[i]){
                int freq=mp[i]/2;
                
                if(i==0){
                    if(!s.empty()){
                        hash[i]++;
                        for(int j=0;j<freq;j++){
                            s+=to_string(i);mp1[i]-=2;
                        }
                        
                    }
                    else break;
                }
                else{
                    hash[i]++;
                    for(int j=0;j<freq;j++){
                        s+=to_string(i);mp1[i]-=2;
                    }
                    
                }
            }
        }
        
        // adding the unvisited max element
        string rem=s;
        reverse(rem.begin(),rem.end());
        
        for(auto i:v){
            if(mp1[i]>0){
                s+=to_string(i); break;
            }
        }
        return s+rem;
    }
};