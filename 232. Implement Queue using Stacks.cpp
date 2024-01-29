class MyQueue {
public:
    list<int> st={};
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push_back(x);
    }
    
    int pop() {
        int val=st.front();
        st.pop_front();
        return val;
    }
    
    int peek() {
        return st.front();
    }
    
    bool empty() {
        return st.empty();
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
