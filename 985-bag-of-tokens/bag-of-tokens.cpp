class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score = 0;
        int maximum = 0;
        int i = 0;
        int n = tokens.size();
        int j = n-1;
        while (i<=j){
            if (tokens[i] <= power){
                power -= tokens[i];
                i++;
                score++;
                maximum = max(maximum,score);
            }
            else if (score > 0){
                power += tokens[j];
                j--;
                score--;
            }
            else{
                break;
            }
        }
        return maximum;
    }
};