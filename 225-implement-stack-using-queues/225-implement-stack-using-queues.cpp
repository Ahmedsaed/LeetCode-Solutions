class MyStack {
public:
    queue<int> qu;
    MyStack() {
        
    }
    
    void push(int x) {
        qu.push(x);
    }
    
    int pop() {
        for (int i = 1; i < qu.size(); i++) {
            qu.push(qu.front());
            qu.pop();
        }
        int top = qu.front();
        qu.pop();
        return top;
    }
    
    int top() {
        return qu.back();
    }
    
    bool empty() {
        return !(qu.size() > 0);
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