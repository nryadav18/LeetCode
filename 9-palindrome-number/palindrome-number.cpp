class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        long long int val=0;
        long int tem=x;
        while (x){
            val = (val*10)+(x%10);
            x/=10;
        }
        return tem==val;
    }
};