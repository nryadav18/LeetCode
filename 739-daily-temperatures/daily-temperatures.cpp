class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        int n = v.size();
        if (n==1){
            return {0};
        }
        //vector
        //0  1  2  3  4  5  6  7
        //73 74 75 71 69 72 76 73
        //                   i
        //                     0
        //stack
        //73-7 
        stack<pair<int,int>>st;
        for (int i=n-1;i>=0;i--){
            if (i==n-1){
                st.push({v[i],i});
                v[i] = 0;
            }
            else{
                if (st.empty()){
                    st.push({v[i],i});
                }
                else if (st.top().first > v[i]){
                    int val = st.top().second - i;
                    st.push({v[i],i});
                    v[i] = val;
                }
                else{
                    while (!st.empty()){
                        if (st.top().first > v[i]){
                            int val = st.top().second - i;
                            st.push({v[i],i});
                            v[i] = val;
                            break;
                        }
                        st.pop();
                    }
                    if (st.empty()){
                        st.push({v[i],i});
                        v[i] = 0;
                    }
                }
            }
        }
        return v;
    }
};