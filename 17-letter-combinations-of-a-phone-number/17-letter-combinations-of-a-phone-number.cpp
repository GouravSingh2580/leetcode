class Solution {
    void solve(string d,vector<string>&v,int index, string temp, string mapping[]){
        if(index>=d.size()){
            v.push_back(temp);
            return;
        }
        int number=d[index]-'0';
        string value=mapping[number];  
        for(auto i:value){
            temp.push_back(i);
            solve(d,v,index+1,temp,mapping);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>v;
        string ans;
        int index=0;
        if(digits.size()==0)
            return v;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,v,index,ans,mapping);
        return v;
    }
};