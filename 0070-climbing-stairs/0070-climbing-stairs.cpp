class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int prev_prev = 1;
        int prev = 2;
        
        for (int i = 3; i <= n; ++i) {
            int temp = prev_prev  + prev;
            prev_prev = prev;
            prev = temp;
        }
        
        return prev;
    }
};
