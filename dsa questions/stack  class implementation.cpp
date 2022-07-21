// how to implement the stack class without using stl
// answer:-

#include <bits/stdc++.h>
using namespace std;

class Stack
{
  public :
           int *arr;
           int size;
           int top;
           
           Stack(int size){
               this->size = size;
               top = -1;
               arr = new int[size];
           }
           void push(int element){
               if(size-top>1){
                   ++top;
                   arr[top]= element;
               }
               else{
                   cout<<"stack is Overflow";
               }
           }
           void pop(){
               if(top<0){
                   cout<<"stack is underflow";
               }
               else{
                   top--;
               }
           }
           int peek(){
               if(top>=0 && top<size){
                   return arr[top];
               }
               else{
                   cout<<"stack is empty";
                   return -1;
               }
           }
           bool isempty(){
               if(top>=0)
                return false;
               else
                return true;
           }

};

int main()
{
   Stack st(5);
   st.push(2);
   st.push(3);
   st.push(8);
   st.pop();
   cout<<st.isempty();
   cout<<st.peek();

    return 0;
}
