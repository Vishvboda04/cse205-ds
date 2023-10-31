class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> st;
    stack<int> re;
    
    void push(int x) {
        while(!st.empty())
        {
            int t = st.top();
            re.push(t);
            st.pop();
        }
        re.push(x);
        while(!re.empty())
        {
            int t = re.top();
            st.push(t);
            re.pop();
        }
    }
    
    int pop() {
        int f = st.top();
        st.pop();
        return f;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty() && re.empty();
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