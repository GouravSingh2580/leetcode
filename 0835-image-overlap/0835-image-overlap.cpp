class Solution {
public:
	int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
		unordered_map<int,int> m;

		for(int i=0; i<img1.size(); i++) {
			for(int j=0; j<img1[i].size(); j++) {
				if(img1[i][j] == 1) {
					 for(int k=0; k<img2.size(); k++) {
						for(int l=0; l<img2[k].size(); l++) {
							if(img2[k][l] == 1) {
								int X= i-k, Y=j-l;
								int unique_code = (X*100)+Y;    //just generating a unique code
								m[unique_code]++;     //counting the no. of occurence of this code
							}
						}
					}   
				}
			}
		}

		//calculating maximum no. of times a single code occurred
		int max = INT_MIN;
		for(auto x: m) {
			if(x.second>max) max = x.second;
		}
		return max==INT_MIN ? 0:max;
	}
};