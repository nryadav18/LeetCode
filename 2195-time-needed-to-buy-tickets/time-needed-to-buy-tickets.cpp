class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        int n = tickets.size();
        if (n == 1) return tickets[0];
        int time = 0;
        while (1){
            for (int i = 0 ; i < n ; i++){
                tickets[i]--;
                if (tickets[i] >= 0){
                    time++;
                }
                if (i == k and tickets[i] == 0){
                    return time;
                }
            }
        }
        return 0;
    }
};