class MyStack {
public:
    vector<int>v;
    MyStack() {
        
    }
    
    void push(int x) {
        v.push_back(x);
    }
    
    int pop() {
        if (v.size()!=0){
            int t = v.back();
            int s = v.size()-1;
            v.erase(v.begin()+s);
            return t;
        }
        return -1;
    }
    
    int top() {
        return v.back();
    }
    
    bool empty() {
        return v.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */