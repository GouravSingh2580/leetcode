class SummaryRanges {
public:
    /** Initialize your data structure here. */
    multiset<vector<int>> mst;
    SummaryRanges() {
        mst = {};
    }
    void addNum(int val) {
        auto it = mst.lower_bound({val,val});
        int start = val, end = val;
        
        if(it != mst.begin() && (*(--it))[1]+1 < val) it++;
        while(it != mst.end() && val >= (*it)[0]-1 && (*it)[1] +1 >= val){
            start = std::min(start, (*it)[0]);
            end = std::max(end, (*it)[1]);
            it = mst.erase(it);
        }
        mst.insert(it, {start, end});
    }
    vector<vector<int>> getIntervals() {
        return vector<vector<int>>(mst.begin(), mst.end());
    }
};