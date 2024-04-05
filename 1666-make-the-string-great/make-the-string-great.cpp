class Solution {
public:
    bool check(char ch1,char ch2){
        if (ch1 >= 'a' and ch1 <= 'z'){
            ch1 = char(int(ch1) - int('a') + int('A'));
        }
        else{
            ch1 = char(int(ch1) - int('A') + int('a'));
        }
        return ch1 == ch2;
    }
    string makeGood(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = s.length();
        if (n == 0 or n == 1) return s;
        int cnt = 0;
        int i = 0;
        string str;
        while ( i < n ){
            if (s[i] >= 'a' and s[i] <= 'z' and s[i+1] >= 'A' and s[i+1] <= 'Z' and check(s[i],s[i+1])){
                i += 2;
                cnt++;
            }
            else if (s[i] >= 'A' and s[i] <= 'Z' and s[i+1] >= 'a' and s[i+1] <= 'z' and check(s[i],s[i+1])){
                i += 2;
                cnt++;
            }
            else{
                str += s[i];
                i++;
            }
        }
        if (cnt != 0) return makeGood(str);
        return str;
    }
};