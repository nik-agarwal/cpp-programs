// Design a data structure, which represents two stacks using only one array common for both stacks. The data structure should support the following operations:
// push1(NUM) - Push ‘NUM’ into stack1.
// push2(NUM) - Push ‘NUM’ into stack2.
// pop1() - Pop out a top element from stack1 and return popped element, in case of underflow return -1.
// pop2() - Pop out a top element from stack2 and return popped element, in case of underflow return -1.
// There are 2 types of queries in the input
// Type 1 - These queries correspond to Push operation.
// Type 2 - These queries correspond to Pop operation.
  
//  input - 3 5
//          1 1 3
//          1 2 4
//          1 1 5
//          2 1
//          2 2
// Sample Output 1:
// 5
// 4

// Answer:-

class TwoStack {

public:
     int top1;
    int top2;
    int size;
    int *arr;
    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this->size = s;
        top1 =-1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(top2-top1 >1){
            top1++;
            arr[top1]= num;
        }
        
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(top2-top1>1)
        {
            top2--;
            arr[top2] = num;
        }   
       
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1>=0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
            return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
        if(top2<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
            return -1;
    }
};
