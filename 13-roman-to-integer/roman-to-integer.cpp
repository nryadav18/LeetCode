class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>up;
        up['I']=1;
        up['V']=5;
        up['X']=10;
        up['L']=50;
        up['C']=100;
        up['D']=500;
        up['M']=1000;
        int n = s.length();
        int res = 0;
        for (int i=0;i<n;i++){
            if (up[s[i]]<up[s[i+1]]){
                res-=up[s[i]];
            }
            else{
                res+=up[s[i]];
            }
        }
        return res;
    }
};