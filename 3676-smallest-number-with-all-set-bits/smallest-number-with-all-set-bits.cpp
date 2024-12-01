class Solution {
public:
    int smallestNumber(int n) {
        if (n == 1) return 1;
        if (n <= 3) return 3;
        int powValue = floor(log2(n)+1);
        if (pow(2,powValue) == n) return n;
        return pow(2,powValue)-1;
    }
};