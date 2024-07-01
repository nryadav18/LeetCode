class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        if (arr.size() <= 2){
            return false;
        }
        int n = arr.size();
        for (int i = 0 ; i < n-2 ; i++){
            if (arr[i] % 2 == 1 and arr[i+1] % 2 == 1 and arr[i+2] % 2 == 1){
                return true;
            }
        }
        return false;
    }
};