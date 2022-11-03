class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        multiset <string> st;
        int ans = 0;
        for(auto s:words){
            string ts = s;
            reverse(ts.begin(),ts.end());
            auto it = st.find(ts);
            if(it != st.end()){
                ans += 4;
                st.erase(it);
            }else{
                st.insert(s);
            }
        }
        for(auto s:st){
            if(s[0]==s[1]){
                ans += 2;
                break;
            }
        }
        return ans;
    }
};