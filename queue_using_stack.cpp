//https://leetcode.com/problems/implement-queue-using-stacks/description/

class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> newS;
        int first;
        while(!s.empty()){
            int k = s.top();
            s.pop();
            if(s.empty()){
                first=k;
                break;
            }
            newS.push(k);
        }
        while(!newS.empty()){
            s.push(newS.top());
            newS.pop();
        }
        return first;
    }
    
    int peek() {
        stack<int> newS;
        int first;
        while(!s.empty()){
            int k = s.top();
            s.pop();
            if(s.empty()){
                first=k;
            }
            newS.push(k);
        }
        while(!newS.empty()){
            s.push(newS.top());
            newS.pop();
        }
        return first;
    }
    
    bool empty() {
        return s.empty();
    }
};
