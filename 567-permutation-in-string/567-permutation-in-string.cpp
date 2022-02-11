class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // map<char,int>mp;
        // for(auto i:s2){
        //     mp[i]++;
        // }
        // int z=0;
        // for(int i=0;i<s1.size();i++){
        //     if(mp.count(s1[i])>0){
        //         z++;
        //         mp[s1[i]]--;
        //         //cout<<mp[s1[i]]<<'\n';
        //     }
        //     cout<<mp.count('z')<<'\n';
        // }
        // if(z==s1.size()){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        int m = s1.length(), n = s2.length(), i=0;
		
		if(m > n)
            return false;
			
		// Two map created
        map<char,int> mp1, mp2;
        
		// mp1 is used to store string s1
        for(char it : s1)
            mp1[it]++;
		
		// mp2 is used to store string s2
        for(i=0; i<m; i++)
            mp2[s2[i]]++;
        
		// if both are permutations of each other
		// then there map will be equal
        if(mp1 == mp2)
            return true;
        
		// using sliding window machanism to update map values
        while(i < n)
        {
			// we have to erase if value is 1
			// otherwise it stores 0 as value and map comparison
			// will result false
            if(mp2[s2[i-m]] == 1)
                mp2.erase(s2[i-m]);
            else
                mp2[s2[i-m]]--;
            
            mp2[s2[i]]++;
            
            if(mp1 == mp2)
                return true;
            
            i++;
        }
        
        return false;
    }
};