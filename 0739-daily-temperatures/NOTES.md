```
class Solution {
public:
void nextLargerElement(vector<int>&arr, int n)
{
vector<unordered_map<string, int> > s;
for (int i = 0; i < n; i++) {
while (s.size() > 0 && s[s.size() - 1]["value"] < arr[i]) {
unordered_map<string, int> d = s[s.size() - 1];
s.pop_back();
arr[d["ind"]] = arr[i];
}
unordered_map<string, int> e;
e["value"] = arr[i];
e["ind"] = i;
s.push_back(e);
}
while (s.size() > 0) {
unordered_map<string, int> d = s[s.size() - 1];
s.pop_back();
arr[d["ind"]] = -1;
}
}
vector<int> dailyTemperatures(vector<int>& t) {
// vector<int>tt=t;
map<int,int>mp,mp2;
for(int i=0;i<size(t);i++){
if(mp2.count(t[i])<1) {
mp[t[i]]=i;
mp2[t[i]]++;
}
}
nextLargerElement(t,size(t));
for(int i=0;i<size(t);i++){
if(t[i]==-1){
t[i]=0;
}
else{
t[i]=abs(mp[t[i]]-i);
}
}
return t;
}
};
```