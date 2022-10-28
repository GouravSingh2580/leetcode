class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, multiset<string>> mpp;
        
        vector<vector<string>> ans;
        
        for(int i =0;i<strs.size();i++){    
            string temp = strs[i];
            sort(temp.begin(), temp.end()); 
            mpp[temp].insert(strs[i]); 
        }
        
        for(auto i : mpp){
            vector<string> s;
            for(auto j : i.second){
                s.push_back(j);
            }
            ans.push_back(s);
        }
        
        return ans;
    }
};