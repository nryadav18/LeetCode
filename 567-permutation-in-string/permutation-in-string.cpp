class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length(), n = s2.length();
        if (m > n) return false;
        vector<int>raj(26,0), jar(26,0);
        for (auto it : s1) raj[it - 'a']++;
        for (int i=0;i<m;i++) jar[s2[i] - 'a']++;
        if (raj == jar) return true;
        for (int i=m;i<n;i++){
            jar[s2[i-m] - 'a']--;
            jar[s2[i] - 'a']++;
            if (raj == jar) return true;
        }
        return false;
    }
};