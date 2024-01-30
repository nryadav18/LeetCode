class Solution {
private:
    int computeValue(int a,int b,string it){
        //cout << a << " " << it << " " << b << " = ";
        if (it == "+") return a+b;
        else if (it == "-") return a-b;
        else if (it == "*") return a*b;
        else return a/b;
    }
    int convertIntoValue(string s){
        if (s[0]=='-'){
            int val = 0;
            for (int i=1;i<s.length();i++){
                val = (val*10)+(s[i]-'0');
            }
            val = 0 - val;
            return val;
        }
        else{
            int val = 0;
            for (int i=0;i<s.length();i++){
                val = (val*10)+(s[i]-'0');
            }
            return val;
        }
        return 0;
    }
    bool isOperator(string s){
        if (s == "+" or s=="-" or s=="*" or s=="/"){
            return true;
        }
        return false;
    }    
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for (auto it : tokens){
            if (isOperator(it)){
                int t1 = st.top();
                st.pop();
                int t2 = st.top();
                st.pop();
                int val = computeValue(t2,t1,it);
                //cout << val << endl;
                st.push(val);
            }
            else{
                if (it.length()==1){
                    int val = it[0] - '0';
                    st.push(val);
                    //cout << val << endl;
                }
                else{
                    int val = convertIntoValue(it);
                    //cout << val << endl;
                    st.push(val);
                }
            }
        }
        //cout << endl;
        // while (!st.empty()){
        //     cout << st.top() << " ";
        //     st.pop();
        // }
        return st.top();
    }
};