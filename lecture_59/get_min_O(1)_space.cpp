class SpecialStack {
    public:
        stack<int>s;
        int mini;


    void push(int data) {
        if(s.empty()){
            s.push(data);
            mini=data;


        }
        else if(!s.empty() && data>=mini){
            s.push(data);

        }
        else if(!s.empty() && data<mini){
            s.push(2*data-mini);
            mini=data;

        }
        
    }

    void pop() {
        if(s.empty()){
            return ;
        }
        else if(!s.empty() && s.top()>=mini){
            s.pop();
        }
        else if(!s.empty() && s.top()<mini){
            int value=2*mini-s.top();
            mini=value;
        }
    }

    int top() {
        if(s.empty()){
            return -1;

        }
        else{
            if(s.top()>mini){
                return s.top();

            }
            else{
                return mini;
                
            }
        }
    }

    int getMin() {
        if(s.empty()){
            return -1;

        }
        else{
            return mini;

        }
    }  
};