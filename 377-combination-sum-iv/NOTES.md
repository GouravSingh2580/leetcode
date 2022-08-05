```
class Solution {
public:
set<vector<int>>st;
void findPermutations(vector<int>&a)
{
sort(a.begin(), a.end());
do {
st.insert(a);
} while (next_permutation(a.begin(),a.end()));
}
void sol(vector<vector<int>>&f, vector<int>&v, vector<int>&c, int t, int sum, int start){
if(sum==t){
f.push_back(v);
return;
}
if(sum>t) return;
for(int i=start;i<c.size();i++){
v.push_back(c[i]);
sol(f,v,c,t,sum+c[i],i);
v.erase(v.end()-1);
}
}
int combinationSum4(vector<int>& c, int t) {
vector<vector<int>>f;
vector<int>v;
sol(f, v, c, t, 0, 0);
int res=0;
for(auto i:f) {
​
if (equal(i.begin() + 1, i.end(), i.begin())) res+=1;
else findPermutations(i), res+=st.size();
st.clear();
}
return res;
}
};
```