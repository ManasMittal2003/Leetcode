class MinStack {
public:
    stack<int> track;
    stack<int> original;
    MinStack() {
        
    }
    
    void push(int val) {
        original.push(val);
        if(track.empty()||val<=track.top()){
            track.push(val);
        }
    }
    
    void pop() {
        if(original.top()==track.top()){
            track.pop();
        }
        original.pop();
    }
    
    int top() {
        return original.top();
    }
    
    int getMin() {
        return track.top();
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
