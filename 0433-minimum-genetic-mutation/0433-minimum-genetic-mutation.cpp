class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        int n = start.length();
        
		// queue for BFS
        queue<pair<string, int>> q;
		// sorting for binary search
        sort(bank.begin(), bank.end());
		// for marking already visited mutations
        set<string> st;
        
        q.push({start, 0});
		
		// possible mutations
        vector<char> dx = {'A', 'C', 'G', 'T'};
        
        while(!q.empty()){
            string s = q.front().first;
            int c = q.front().second;
            q.pop();
			
			// checking target
            if(s == end)    return c;
            
            for(int i=0; i<n; i++){   
                int x = s[i];
                for(int j=0; j<4; j++){
                    s[i] = dx[j];
					// check if mutation is in bank and not already visited
                    if(binary_search(bank.begin(), bank.end(), s)  && st.count(s) != 1){
                        st.insert(s);
                        q.push({s, c+1});
                    }
                }
                s[i] = x;
            }
        }
        return -1;
        
    }
};