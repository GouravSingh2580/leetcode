class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int cost = 0;
        int i=0;
        while(i< colors.size()-1){
            if(colors[i] == colors[i+1]) {
                cost += min(neededTime[i],neededTime[i+1]);
                if(neededTime[i+1] < neededTime[i])
                    neededTime[i+1] = neededTime[i];
            }
            i++;
        }
        return cost;
    }
};