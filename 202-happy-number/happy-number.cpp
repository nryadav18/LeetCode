class Solution {
public:
    bool isHappy(int n) {
        if (n == 1) return true;
        long long val = 0;
        unordered_map<int,int>up;
        int temp = n;
        while (1){
            val = 0;
            while (temp){
                val += pow(temp%10,2);
                temp /= 10;
            }
            if (val == 1){
                return true;
            }
            if (up[val] > 0){
                return false;
            }
            else{
                up[val]++;
            }
            n = val, temp = val;
        }
        return false;
    }
};