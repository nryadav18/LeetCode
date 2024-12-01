class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        map<int,int>mp;
        for (auto it : arr) mp[it]++;
        for (auto it : arr){
            if (mp[it*2] >= 1){
                if ((it == 0 or it == 1) and mp[it] == 1){
                    continue;
                }
                return true;
            }
        }
        return false;
    }
};