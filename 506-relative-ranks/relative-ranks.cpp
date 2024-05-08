class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& scores) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = scores.size();
        if (n == 1) return {"Gold Medal"};
        if (n == 2) {
            if (scores[0] > scores[1]) return {"Gold Medal","Silver Medal"};
            else return {"Silver Medal","Gold Medal"};
        }
        unordered_map<int,int>up;
        vector<int>temp(scores.begin(),scores.end());
        sort(temp.rbegin(),temp.rend());
        for (int i = 0 ; i < n ; i++){
            up[temp[i]] = i+1;
        }
        vector<string>v;
        for (auto it : scores){
            if (up[it] == 1) v.push_back("Gold Medal");
            else if (up[it] == 2) v.push_back("Silver Medal");
            else if (up[it] == 3) v.push_back("Bronze Medal");
            else {
                v.push_back(to_string(up[it])); 
            }
        }
        return v;
    }
};