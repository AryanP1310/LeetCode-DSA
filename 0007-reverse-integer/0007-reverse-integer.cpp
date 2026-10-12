class Solution {
public:
    int reverse(int x) {
        int temp = x, rem = 0, rev = 0;
        int m = INT_MAX/10;
        int l = INT_MIN/10;
        while(x != 0)
        {
            rem = x % 10;
            if(rev > m|| rev < l)
            {
                return 0;
            }
            rev = (rev*10) + rem;
            x = x/10;
        }
        return rev;
    }
};