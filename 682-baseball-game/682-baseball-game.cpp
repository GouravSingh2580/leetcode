class Solution {
public:
    bool isNumber(const string& str)
    {
        for (char const &c : str) {
            if (isdigit(c) == 0) return false;
        }
        return true;
    }
    int calPoints(vector<string>& ops) {
        vector<int>v;
        for(auto i:ops){
            if(isNumber(i)){
                v.push_back(stoi(i));
            }
            else{
                string s=i;
                if(s[0]=='-'){
                    s.erase(0,1);
                    if(isNumber(s)){
                        v.push_back(stoi(i));
                    }
                }
            }
            if(i=="+"){
                int a=v[v.size()-1]+v[v.size()-2];
                v.push_back(a);
            }
            if(i=="C"){
                v.pop_back();
            }
            if(i=="D"){
                int a=v[v.size()-1]+v[v.size()-1];
                v.push_back(a);
            }
        }int sum=0;
        for(auto i:v) sum+=i;
        return sum;
    }
};