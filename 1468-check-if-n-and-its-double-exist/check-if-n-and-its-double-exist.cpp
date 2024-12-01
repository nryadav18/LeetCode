class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        map<int,int>mp;
        for (auto it : arr) mp[it]++;
        for (auto it : arr){
            if (it == 0 or it == 1){
                if (mp[it] >= 2){
                    return true;
                }
            }
            else{
                if (mp[it*2] >= 1){
                    return true;
                }
            }
        }
        return false;
    }
};