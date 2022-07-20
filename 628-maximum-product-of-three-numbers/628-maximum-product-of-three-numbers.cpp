class Solution {
public:
    // static bool c(int a, int b){
    //     return abs(a)>=abs(b);
    // }
    int maximumProduct(vector<int>& a) {
		int n = a.size();
		sort(a.begin(), a.end());
		return max(a[n - 1] * a[n - 2] * a[n - 3], a[0] * a[1] * a[n - 1]);
	}
};