class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int c=0;
        for(int i=0;i<o.size();i++){
            for(auto j:o[i]){
                if(j=='-'){
                    c--;break;
                }
                if(j=='+'){
                    c++;break;
                }
            }
        }
        return c;
    }
};