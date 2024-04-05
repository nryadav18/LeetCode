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
        stack<char>st;
        while ( i < n ){
            if (st.empty()){
                st.push(s[i]);
            }
            else if (check(st.top(),s[i])){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
        }
        string str;
        while (!st.empty()){
            str += st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};