class MinStack {
public:
    vector<pair<int,int> >st;
   
    
    void push(int val) {
        if(st.empty()){
            // it means i am inserting first element
            pair<int,int> p ;
            p.first = val;
            p.second = val;
            st.push_back(p);
        }
        else{
             pair<int,int> p ;
             p.first = val;
             int oldMin = st.back().second; // purana min mil gya
             p.second = min(oldMin , val); // purane value me aur new value me jo min rhega vo                                              // p.second me ja ke store jayega   
             st.push_back(p);
        }
    }
    
    void pop() {
        st.pop_back(); //jo bhi right most element hai usko pop karna hai
    }
    
    int top() {
        pair<int,int> rightMostPair = st.back();
        return rightMostPair.first;
    }
    
    int getMin() {
         pair<int,int> rightMostPair = st.back(); // whole box 
         return rightMostPair.second; // in whole box i want only min box 
        
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