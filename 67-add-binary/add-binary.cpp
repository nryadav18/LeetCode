class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.length()-1;
        int j = b.length()-1;
        char car = '0';
        while (i>=0 and j>=0){
            if (a[i]=='0' and b[j]=='0'){
                if (car=='0') {
                    res += '0';
                }
                else{
                    res += '1';
                    car = '0';
                }
            }
            else if ((a[i]=='1' and b[j]=='0') or (a[i]=='0' and b[j]=='1')){
                if (car == '0'){
                    res += '1';
                }
                else{
                    res += '0';
                }
            } 
            else{
                if (car == '0'){
                    res += '0';
                }
                else{
                    res += '1';
                }
                car = '1';
            }
            i--;
            j--;
        }
        while (i >= 0){
            if (car == '0' and a[i] == '1'){
                res += '1';
            }
            else if (car == '1' and a[i] == '0'){
                res += '1';
                car = '0';
            }
            else{
                res += '0';
            }
            i--;
        }
        while (j >= 0){
            if (car == '0' and b[j] == '1'){
                res += '1';
            }
            else if (car == '1' and b[j] == '0'){
                res += '1';
                car = '0';
            }
            else{
                res += '0';
            }
            j--;
        }
        if (car == '1') res += '1';
        reverse(res.begin(),res.end());
        return res;
    }
};