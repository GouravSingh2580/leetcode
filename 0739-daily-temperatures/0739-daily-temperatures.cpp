class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> index;
        vector<int> result(T.size(),0);
        index.push(0);
        for(int i=1;i<T.size();i++){
            int element = T[i];
            while(!index.empty() && element>T[index.top()]){
                result[index.top()] = i-index.top();
                index.pop();
            }
            
            index.push(i);
        }
        
        return result;
    }
};