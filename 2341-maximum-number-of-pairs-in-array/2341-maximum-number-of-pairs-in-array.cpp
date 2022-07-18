class Solution {
public:
    vector<int> numberOfPairs(vector<int>& n) {
        map<int,int>mp;
        int rem=n.size();
        int c=0;
        for(auto i:n) mp[i]++;
        for(auto i:mp){
            if(i.second>=2){
                c+=(i.second)/2;
                rem-=i.second%2==0 ? i.second : i.second-1;
            }
        }
        return {c,rem};
    }
};