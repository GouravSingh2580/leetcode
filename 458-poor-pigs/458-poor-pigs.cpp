class Solution {
public:
    int poorPigs(int b, int mD, int mT) {
        return ceil(log(b)/log((mT/mD)+1));
    }
};