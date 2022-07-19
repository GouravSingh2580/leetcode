class Solution {
public:
    map<string,int> string_to_map(string str)
    {
        map<string,int>mp;
        istringstream ss(str);
        string word;
        while (ss >> word) mp[word]++;
        return mp;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int>mp1=string_to_map(s1);
        map<string,int>mp2=string_to_map(s2);
        
        
        // vector<string>v1=string_tovec(s1);
        // vector<string>v2=string_tovec(s2);
        vector<string>v;
        for(auto i:mp1){
            if(mp2.count(i.first)<1 && i.second==1) v.push_back(i.first);
        }
        for(auto i:mp2){
            if(mp1.count(i.first)<1 && i.second==1) v.push_back(i.first);
        }
        return v;
    }
};