class MyCircularQueue {
private:
    int *queueValues;
    int size;
    int head, tail;
    int count;
    
public:
    MyCircularQueue(int k) {
        size = k;
        queueValues = new int[size];
        head = 0;
        tail = 0;
        count = 0;
    }
    
    bool enQueue(int value) {
        if(count == size)
            return false;
        
        queueValues[tail] = value;
        tail++;
        count++;
        if(tail == size)
            tail = 0;
        return true;
    }
    
    bool deQueue() {
        if(count == 0)
            return false;
        
        head++;
        count--;
        if(head == size)
            head = 0;
        return true;
    }
    
    int Front() {
        if(count == 0)
            return -1;
        else
            return queueValues[head];
    }
    
    int Rear() {
        if(count == 0)
            return -1;
        
        int tmp = tail-1;
        if(tmp < 0)
            tmp = size-1;
        return queueValues[tmp];
    }
    
    bool isEmpty() {
        if(count == 0)
            return true;
        else
            return false;
    }
    
    bool isFull() {
        if(count == size)
            return true;
        else
            return false;
    }
};
