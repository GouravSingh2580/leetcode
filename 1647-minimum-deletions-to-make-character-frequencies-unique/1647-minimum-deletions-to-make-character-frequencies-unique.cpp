class Solution {
public:
    int minDeletions(string s) {
        map<int, int >mp;
        vector<int> arr;
        for(int i = 0; i<s.length(); i++){
            mp[s[i]]++;
        }
        for(auto i: mp){
            arr.push_back(i.second);
        }
        // sort(arr.begin(), arr.end(), greater<int>());
        long long int vis[100001] = {};
        for(int i = 0; i < arr.size(); i++){
            vis[arr[i]] ++;
        }
        int c = 0;
        for(int i =  1; i < arr.size(); i++){
            cout<<vis[arr[i]];
            if(vis[arr[i]] > 1);
            {   int freq = arr[i];
                while(vis[freq] > 1 and freq>0){
                    vis[freq] --;
                    freq --;
                    vis[freq]++;
                    c++;
                }
            }
        }
        return c;
    }
};