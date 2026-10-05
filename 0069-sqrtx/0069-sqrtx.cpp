class Solution {
public:
    int mySqrt(int x) {
        int i=-1;
        while(!((static_cast<long long>(i))*i<=x && (static_cast<long long>(i+1))*(i+1)>x)) i++;
        return i;
    }
};