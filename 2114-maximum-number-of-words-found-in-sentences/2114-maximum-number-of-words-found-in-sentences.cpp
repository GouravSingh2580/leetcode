class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
         int len = sentences.size(), count = 0;
        vector<int>vec;
        for(int i=0;i<len;i++){
            count = 0;
            for(int j=0;sentences[i][j] != '\0';j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            vec.push_back(count);
        }
        int mx = *max_element(vec.begin(),vec.end());
        return mx+1;
    }
};