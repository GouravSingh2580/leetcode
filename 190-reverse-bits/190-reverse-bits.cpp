class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> b(n);
        for(int i=0;i<32/2;++i){
            bool t=b[i];
            b[i]=b[b.size()-1-i];
            b[b.size()-1-i]=t;
        }
        return (uint32_t)b.to_ulong();
    }
};