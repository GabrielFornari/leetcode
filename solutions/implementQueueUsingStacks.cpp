class MyQueue {
private:
    stack<int> normalStack;
    stack<int> inverseStack;
    
public:
    MyQueue() {
    }
    
    void push(int x) {
        normalStack.push(x);
    }
    
    int pop() {
        if(inverseStack.empty()){
            while(!normalStack.empty()){
                inverseStack.push(normalStack.top());
                normalStack.pop();
            }
            if(inverseStack.empty())
                return NULL;
        }
        int out = inverseStack.top();
        inverseStack.pop();
        return out;
    }
    
    int peek() {
        if(inverseStack.empty()){
            while(!normalStack.empty()){
                inverseStack.push(normalStack.top());
                normalStack.pop();
            }
            if(inverseStack.empty())
                return NULL;
        }
        return inverseStack.top();
    }
    
    bool empty() {
        return normalStack.empty() && inverseStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */