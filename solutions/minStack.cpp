class MinStack {
public:
    stack<int> values;
    stack<int> minValues;
        
    MinStack() {
    }
    
    void push(int val) {
        values.push(val);
        
        if(minValues.empty())
            minValues.push(val);
        else if(val <= minValues.top())
            minValues.push(val);
    }
    
    void pop() {
        if(values.top() == minValues.top())
            minValues.pop();
        
        values.pop();
    }
    
    int top() {
        return values.top();
    }
    
    int getMin() {
        return minValues.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */