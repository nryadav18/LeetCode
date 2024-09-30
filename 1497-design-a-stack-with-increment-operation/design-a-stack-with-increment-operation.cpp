class CustomStack {
public:
    int stack[1001], maxiSize = -1, it = -1;
    CustomStack(int maxSize) {
        maxiSize = maxSize;
    }
    
    void push(int x) {
        if (it != maxiSize-1){
            stack[++it] = x;
        }
    }
    
    int pop() {
        return (it == -1) ? -1 : stack[it--];
    }
    
    void increment(int k, int val) {
        if (it != -1){
            for (int i=0;i<k&&i<maxiSize;i++){
                stack[i] += val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */