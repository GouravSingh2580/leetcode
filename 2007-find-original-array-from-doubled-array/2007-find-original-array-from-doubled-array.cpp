class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        multiset<int> mset(changed.begin(), changed.end());
        if(mset.size() % 2 == 1) return {};
        vector<int> res(mset.count(0)/2, 0);
        mset.erase(0);
		
        while(!mset.empty()){
            auto low = mset.begin();
            if(!mset.count((*low)*2)) return {};
            res.push_back(*low);
            mset.erase(mset.find((*low)*2)); 
            mset.erase(low);
        }        
        return res;        
    }
};