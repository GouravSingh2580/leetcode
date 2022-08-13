class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int len=0;
        for(auto x : words) len+=x.size();
        
        string tp="";
        vector<int> ans;
        // if(s.size()<len) return ans;
        
        
        vector<pair<string,int>> v; //slide take all windows
        for(int i=0;i<len;i++) tp+=s[i];
        
        v.push_back({tp,0});
        
        for(int i=len;i<s.size();i++){
            tp.erase(tp.begin());
            tp+=s[i];
            
            v.push_back({tp,i-len + 1});
        }
        
        multiset<string> st;
        for(auto x : words) st.insert(x);
        
        multiset<string> st1 = st;
        
        int wordlen=words[0].size();
        for(auto x : v){
            
            string y =  x.first;
         
            int index = x.second;
            bool aa=true;
            string tp1="";
            
            for(int i=0;i<wordlen;i++){
                tp1+=y[i];
            }
            
            if(st.find(tp1)!=st.end()){
                st.erase(st.find(tp1)); 
            }
            else{
                aa=false;
            }
            for(int i=wordlen;i<y.size() and aa;i+=wordlen){
                tp1 = y.substr(i,wordlen);
                
                if(st.find(tp1)!=st.end()){
                    st.erase(st.find(tp1));
                }
                else{
                    aa=false;
                }
            }
            
            if(aa) ans.push_back(index);
            st = st1;
        }
        
        return ans;
    }
};