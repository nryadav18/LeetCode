class MyCircularDeque {
public:
    int List[1001];
    int prev = 500, next = 500, maxSize = -1, listSize = 0;
    MyCircularDeque(int k) {
        for (int i=0;i<1001;i++){
            List[i] = -1;
        }
        maxSize = k;
    }
    
    bool insertFront(int value) {
        if (listSize == maxSize){
            return false;
        }
        else if (listSize == 0){
            List[prev] = value;
        }
        else{
            List[--prev] = value;
        }
        listSize++;
        return true;
    }
    
    bool insertLast(int value) {
        if (listSize == maxSize){
            return false;
        }
        else if (listSize == 0){
            List[next] = value;
        }
        else{
            List[++next] = value;
        }
        listSize++;
        return true;
    }
    
    bool deleteFront() {
        if (listSize == 0){
            return false;
        }
        else if (listSize == 1){
            List[prev] = -1;
        }
        else{
            List[prev++] = -1;
        }
        listSize--;
        return true;
    }
    
    bool deleteLast() {
        if (listSize == 0){
            return false;
        }
        else if (listSize == 1){
            List[next] = -1;
        }
        else{
            List[next--] = -1;
        }
        listSize--;
        return true;
    }
    
    int getFront() { 
        if (listSize == 0){
            return -1;
        }
        return List[prev];
    }
    
    int getRear() {
        if (listSize == 0){
            return -1;
        }
        return List[next];
    }
    
    bool isEmpty() {
        return listSize == 0;
    }
    
    bool isFull() {
        return listSize == maxSize;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */