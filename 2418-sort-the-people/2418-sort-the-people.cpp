class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>mp;
        for(int i=0;i<names.size();i++){
            mp[heights[i]]=names[i];
        }
        vector<string>v;
        sort(heights.begin(),heights.end());
        reverse(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            v.push_back(mp[heights[i]]);
        }
        return v;
    }
};