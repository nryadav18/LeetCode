class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = gifts.size(), mod = 1e9+7;;
        while (k--){
            sort(gifts.begin(),gifts.end());
            long long val = sqrt(gifts[n-1]);
            gifts[n-1] = val;
        }
        long long result = 0;
        for (auto it : gifts){
            result += (it)%mod;
        }
        return result;
    }
};