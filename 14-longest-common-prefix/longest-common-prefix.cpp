class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 1) return strs[0];
        string answer = strs[0];
        for (int i=1;i<n;i++){
            if (strs[i] == "") return "";
            string newAnswer = "";
            for (int j=0;j<strs[i].length();j++){
                if (strs[i][j] != answer[j]){
                    break;
                } else{
                    newAnswer += answer[j];
                }
            }
            answer = newAnswer;
        }
        return answer;
    }
};