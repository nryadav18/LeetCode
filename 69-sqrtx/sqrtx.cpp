class Solution {
public:
    int mySqrt(int x) {
    if (!x)return 0;
    else if (x==1)return 1;
    else {

        int min = 1, max = x;
        long mid;
        while (max>=min){
            
            mid = min + (max-min)/2;
            
            if (mid*mid<=x && x < (mid+1) * (mid+1))
                return mid;
            
            if (mid * mid < x)
                min = mid + 1;
            
            if (mid * mid > x) max = mid - 1;
        }
    }
    return -1;
    }
};