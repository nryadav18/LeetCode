class Solution {
public:
    int calPoints(vector<string>&op) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        stack<int>st;
        int n = op.size();
        for (int i = 0 ; i < n ;i ++){
            if (op[i].length()==1){
                string temp = op[i];
                if (temp[0]>='0' and temp[0]<='9'){
                    int val = temp[0] - '0';
                    //cout << val << endl;
                    st.push(val);
                }
                else if (temp[0]=='C'){
                    st.pop();
                }
                else if (temp[0]=='D'){
                    st.push(st.top()*2);
                }
                else if (temp[0]=='+'){
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.push(a);
                    int val = a+b;
                    st.push(val);
                }
            }
            else{
                string temp = op[i];
                if (temp[0]=='-'){
                    int val = 0;
                    for (int k = 1 ; k < temp.length() ; k ++){
                        val = (val*10)+(temp[k]-'0');
                    }
                    val = 0 - val;
                    st.push(val);
                }
                else{
                    int val = 0;
                    for (int k = 0 ; k < temp.length() ; k ++){
                        val = (val*10)+(temp[k]-'0');
                    }
                    st.push(val);
                }
            }
        }
        if (st.size()==0) return 0;
        int res = 0;
        while (!st.empty()){
            res += st.top();
            st.pop();
        }
        return res;
    }
};