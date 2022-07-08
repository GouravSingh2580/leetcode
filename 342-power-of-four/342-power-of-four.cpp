class Solution {
public:
    bool isPowerOfFour(int n) {
        set<int>st;
        int f=4; ;st.insert(1); st.insert(f);
        for(int i=0;i<14;i++){
            f*=4; st.insert(f);
        }
        if(st.count(n)) return true;
        else return false;
    }
};