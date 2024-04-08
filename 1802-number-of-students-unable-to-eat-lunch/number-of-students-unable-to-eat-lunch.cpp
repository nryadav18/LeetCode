class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        deque<int>q1,q2;
        for(auto it : students) q1.push_back(it);
        for(auto it : sandwiches) q2.push_back(it);
        int cnt = 0;
        while (q2.size() != 0 and cnt < q2.size()){
            if (q1.front() == q2.front()){
                q1.pop_front();
                q2.pop_front();
                cnt = 0;
            }
            else{
                int val = q1.front();
                q1.pop_front();
                q1.push_back(val);
                cnt++;
            }
        }
        return cnt;
    }
};