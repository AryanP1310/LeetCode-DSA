class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x<4) return 1;
        long long low = 0, high = x/2;
        while(low<=high) {
            long long mid = (high - low)/2 + low;
            if(mid*mid==x) return mid;
            if(mid*mid>x || (mid*mid<x && (mid+1)*(mid+1)>x)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};