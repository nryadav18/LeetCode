class Solution {
public:
    bool isVowel(char ch){
        if (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u') return true;
        if (ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U') return true;
        return false;
    }
    string toGoatLatin(string s) {
        string res;
        string t;
        int n = s.length();
        vector<string>v;
        for (int i=0;i<n;i++){
            if (isalpha(s[i])){
                t += s[i];
            }
            if ((i==n-1 or s[i]==' ') and t!=""){
                v.push_back(t);
                t="";
            }
        }
        int size = v.size();
        for (int i=0;i<size;i++){
            t = v[i];
            if (isVowel(t[0])){
                t += "ma";
            }
            else{
                char ch = t[0];
                t.erase(0,1);
                t += ch;
                t += "ma";
            }
            int add = i+1;
            while (add--){
                t += 'a';
            }
            if (i!=size-1){
                res += t;
                res += " ";
            }
            else{
                res += t;
            }
        }
        return res;
    }
};