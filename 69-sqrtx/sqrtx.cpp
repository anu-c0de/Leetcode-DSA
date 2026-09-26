class Solution {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            long long sq = 1LL * mid * mid;
            if( sq == x) return mid;
            else if(sq >x) hi = mid-1;
            else lo = mid+1;
        }
        return hi;
    }
};