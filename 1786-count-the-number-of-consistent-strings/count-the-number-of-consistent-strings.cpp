class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<int,int>um;
        for (auto it : allowed){
            um[it]++;
        }   
        int cnt = 0;
        for (auto it : words){
            bool flag = true;
            for (auto ls : it){
                if (um[ls] < 1){
                    flag = false;
                    break;
                }
            }
            if (flag){
                cnt++;
            }
        }
        return cnt;
    }
};