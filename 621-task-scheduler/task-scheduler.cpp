class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m = tasks.size();
        if (n==0) return m;
        vector<int>freq(26,0);
        for (auto it : tasks){
            freq[it - 'A']++;
        }
        int maxFreq = 0;
        int sameMax = 0;
        for (int i=0;i<26;i++){
            if (freq[i] > maxFreq){
                maxFreq = freq[i];
                sameMax = 1;
            }
            else if (freq[i] == maxFreq){
                sameMax++;
            }
        }
        int res = (n + 1) * (maxFreq - 1) + sameMax;
        if (res > m) return res;
        return m;
    }
};