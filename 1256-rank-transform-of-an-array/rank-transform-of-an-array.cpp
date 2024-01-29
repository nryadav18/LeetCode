class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>s;
        for (auto it : arr){
            s.insert(it);
        }
        unordered_map<int,int>up;
        int ind = 1;
        for (auto it : s){
            up.insert({it,ind});
            ind++;
        }
        int n = arr.size();
        for (int i = 0 ; i < n ; i++){
            arr[i] = up[arr[i]];
        }
        return arr;
    }
};