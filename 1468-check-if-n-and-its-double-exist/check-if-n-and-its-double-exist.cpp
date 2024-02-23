class Solution {
public:
    bool linearSearch(vector<int>v){
        for (auto it : v){
            if (it == 0){
                return true;
            }
        }
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        if (linearSearch(arr)){
            int cnt = count(arr.begin(),arr.end(),0);
            //cout << cnt;
            if (cnt >= 2){
                return true;
            }
            //return false;
        }
        map<int,int>mp;
        for (auto it : arr){
            mp[it]++;
        }
        for (auto it : mp){
            int val = (it.first)*2;
            if (val != 0 and mp.find(val) != mp.end()){
                cout << val << " ";
                return true;
            }
        }
        return false;
    }
};