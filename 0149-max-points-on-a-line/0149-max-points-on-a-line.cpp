class Solution {
private:
    int gcd(int a, int b)
    {
        if (b == 0) return a;
        else return gcd(b, a%b);
    }
public:
    int maxPoints(vector<vector<int>>& points) {
        int res = 0;
        for (int i = 0; i < points.size(); i++)
        {
            unordered_map<string, int> m;
            for (int j = i+1; j < points.size(); j++)
            {
                string key;
                int dy = points[i][1] - points[j][1];
                int dx = points[i][0] - points[j][0];
                if (dy == dx)
                    key = "1-1";
                else
                {
                    int d = gcd(dy, dx);
                    key = to_string(dy/d) + "-" + to_string(dx/d);
                }
                res = max(res, ++m[key]);
            }
        }
        
        return res+1;
    }
};