class MyQueue {
public:
    stack<int>in;
    stack<int>out;
    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        //如果out為空則把in都塞進去
        if(out.empty()){
            //塞到in為空
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }
        int ans = out.top();
        out.pop();
        return ans;
    }
    
    int peek() { //top? pop?
        if(out.empty()){
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
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