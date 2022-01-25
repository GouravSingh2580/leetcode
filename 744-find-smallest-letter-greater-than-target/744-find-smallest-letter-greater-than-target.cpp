class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
        char x=l[0];
        for(int i=0;i<l.size();i++){
            if(l[i]>target){
                x= l[i];
                break;
            }
        }
        return x;
    }
};