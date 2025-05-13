class Solution {
public:
    int getVal(vector<int>&store, bool flag){
        if (flag){
            return max(store[0], max(store[4], max(store[8], max(store[14], store[20]))));
        }
        int maxi = 0;
        for (int i=0;i<26;i++){
            if (i != 0 and i != 4 and i != 8 and i != 14 and i != 20){
                maxi = max(maxi, store[i]);
            }
        }
        return maxi;
    }
    int maxFreqSum(string s) {
        vector<int>store(26,0);
        for (auto it : s) store[it-'a']++;
        return getVal(store,true)+getVal(store,false);
    }
};