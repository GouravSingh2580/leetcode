class Solution {
public:
    int largestInteger(int num) {
        vector<int>v;
        while(num){
            v.push_back(num%10); num=num/10;
        }
        reverse(v.begin(),v.end());
        vector<int>odd,even;
        for(auto i:v){
            if(i%2) odd.push_back(i);
            else even.push_back(i);
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        reverse(odd.begin(),odd.end());
        reverse(even.begin(),even.end());
        int z=0,z1=0;
        for(int i=0;i<v.size();i++){
            if(v[i]%2) { v[i]=odd[z]; z++; } 
            else { v[i]=even[z1]; z1++; } 
        }
        string s;
        for(auto i:v) {s+=to_string(i);}
        return stoi(s);
    }
};