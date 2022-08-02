/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node
{
  public:
     int data;
    node* left;
    node* right;
    
    node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildtree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    
    if(data == -1)
      return NULL;
      
      cout<<"Enter data for inserting in left of"<<data<<endl;
      root->left = buildtree(root->left);
      cout<<"Enter data for inserting in right of"<<data<<endl;
      root->right = buildtree(root->right);
      
      return root;
    
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
              q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
              q.push(temp->left);
            if(temp->right)
              q.push(temp->right);
        }
    }
}

void reverseOrderTraversal(node* root){
    queue<node*> q;
    stack<int> s;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            
            while(!s.empty()){
                int val = s.top();
                cout<<val<<" ";
                s.pop();
            }
            cout<<endl;
            if(!q.empty())
              q.push(NULL);
        }
        else{
            s.push(temp->data);
            if(temp->left)
              q.push(temp->left);
            if(temp->right)
              q.push(temp->right);
              
        }
    }
}

int main()
{
//    printf("Hello World");

          node* root = NULL;
         root = buildtree(root);
         levelOrderTraversal(root);
         reverseOrderTraversal(root);
    return 0;
}
