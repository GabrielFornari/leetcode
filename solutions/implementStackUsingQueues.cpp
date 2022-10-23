class MyStack {
private:
    queue<int> queue1, queue2;
    
public:
    MyStack() {    
    }
    
    void push(int x) {
        if(queue1.empty())
            queue1.push(x);
        else
            queue2.push(x);
    }
    
    int pop() {
        int out;
        if(queue2.empty()){
            while(!queue1.empty()){
                out = queue1.front();
                queue1.pop();
                if(queue1.empty())
                    break;
                queue2.push(out);
            }
            return out;
        }
        else{
            while(!queue2.empty()){
                out = queue2.front();
                queue2.pop();
                if(queue2.empty())
                    break;
                queue1.push(out);
            }
            return out;
        }
    }
    
    int top() {
        int out;
        if(queue2.empty()){
            while(!queue1.empty()){
                out = queue1.front();
                queue1.pop();
                queue2.push(out);
            }
            return out;
        }
        else{
            while(!queue2.empty()){
                out = queue2.front();
                queue2.pop();
                queue1.push(out);
            }
            return out;
        }
    }
    
    bool empty() {
        return queue1.empty() && queue2.empty();
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