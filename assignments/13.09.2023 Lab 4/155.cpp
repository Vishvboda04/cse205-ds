// 155. Min Stack

// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
// You must implement a solution with O(1) time complexity for each function.

class MinStack {
public:
stack<int> st, min_st;
    MinStack() {
    }
    
    void push(int val) {
        if(min_st.empty() || val <= min_st.top())
        {
            min_st.push(val);
        }
        st.push(val);
    }
    
    void pop() {
        if(min_st.top() == st.top())
        {
            min_st.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_st.top();
    }
};

