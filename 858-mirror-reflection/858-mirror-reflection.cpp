class Solution {
public:
    int mirrorReflection(int p, int q) {
        return (1 + (q / __gcd(p, q)) % 2) - ((p / __gcd(p, q)) % 2);
    }
};