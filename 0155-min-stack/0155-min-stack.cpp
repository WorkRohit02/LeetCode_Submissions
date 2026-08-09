class MinStack {
public:

    queue<int> q1 ;
    queue<int> q2 ;

    MinStack() {
        
    }
    
    void push(int val) {
        while(!q1.empty()){
            q2.push(q1.front()) ;
            q1.pop() ;
        }

        q1.push(val) ; 

        while(!q2.empty()){
            q1.push((q2.front())) ;
            q2.pop() ;
        }
    }
    
    void pop() {
        q1.pop() ;
    }
    
    int top() {
        return q1.front() ;
    }
    
    int getMin() {
        int mini = INT_MAX ;
        while(!q1.empty()){
            mini = min(mini , q1.front()) ;
            q2.push(q1.front()) ;
            q1.pop() ;
        }
        while(!q2.empty()){
            q1.push((q2.front())) ;
            q2.pop() ;
        }
        return mini ;
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