class Solution {
public:
    // bool iss(string& s1, string& s2)
    // {
    //     int n = s1.length(), m = s2.length();
    //     int i = 0, j = 0;
    //     while (i < n && j < m) {
    //         if (s1[i] == s2[j])
    //             i++;
    //         j++;
    //     }
    //     return i == n;
    // }
    int numMatchingSubseq(string s, vector<string>& w) {
        map<char,vector<int>>mp;
        int j=0;
        for(auto i:s) mp[i].push_back(j++);
        
        int c=0;
        for(int i=0;i<w.size();i++){
            string t=w[i];
            int latest_idx=-1;
            for(int j=0;j<t.size();j++){
                auto it=upper_bound(begin(mp[t[j]]),end(mp[t[j]]),latest_idx);
                
                if(it==mp[t[j]].end()) break;
                
                latest_idx=*it;
                
                if(j==t.size()-1) c++;
            }
        }
        return c;
    }
    // unordered_set<string> st;
    // unordered_map<string,int>mp;
    // void subsequence(string str)
    // {
    //     int i;
    //     for (i = 0; i < str.length(); i++) {
    //         for (int j = str.length(); j > i; j--) {
    //             string sub_str = str.substr(i, j);
    //             // st.insert(sub_str);
    //             mp[sub_str]++;
    //             for (int k = 1; k < sub_str.length(); k++) {
    //                 string sb = sub_str;
    //                 sb.erase(sb.begin() + k);
    //                 subsequence(sb);
    //             }
    //         }
    //     }
    // }
    
    
    // void su(string input, string output)
    // {
    //     if (input.empty()) {
    //         mp[output]++;
    //         // v.push_back(output);
    //         return;
    //     }
    //     su(input.substr(1), output + input[0]);
    //     su(input.substr(1), output);
    // }
};