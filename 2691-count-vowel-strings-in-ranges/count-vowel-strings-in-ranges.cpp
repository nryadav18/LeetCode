class Solution {
public:
    bool isVowel(char ch){
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'){
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = words.size(), i = 0, cnt = 0;
        vector<int>store(n+1);
        for (int i=0;i<n;i++){
            string s = words[i];
            if (isVowel(s[0]) and isVowel(s[s.length()-1])){
                cnt++;
            }
            store[i+1] = cnt;
        }
        vector<int>result(queries.size());
        for (int i=0;i<queries.size();i++){
            vector<int>it = queries[i];
            result[i] = store[it[1]+1] - store[it[0]];
        }
        return result;
    }
};