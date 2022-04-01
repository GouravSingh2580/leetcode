class Solution {
public:
    string reverseVowels(string s) {
        string v="aeiouAEIOU";
        unordered_map<char,int>mp;
        for(auto i:v) mp[i]++;
        
        int l=0;
        int r=s.size()-1;
        
        while(l<r){
            if(!mp[ s[l] ]) l++;
            else if(!mp[ s[r] ]) r--;
            else swap(s[l++],s[r--]);
        }
        return s;
    }
};