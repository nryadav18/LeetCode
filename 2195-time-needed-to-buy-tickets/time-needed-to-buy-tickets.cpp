class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = tickets.size();
        if (n == 1) return tickets[0];
        int time = 0;
        for (int i = 0 ; i < n ; i++){
            if (i <= k){
                if (tickets[i] < tickets[k]){
                    time += tickets[i];
                }
                else{
                    time += tickets[k];
                }
            }
            else{
                if (tickets[i] < tickets[k]){
                    time += tickets[i];
                }
                else{
                    time += tickets[k] - 1;
                }
            }
        }
        return time;
    }
};