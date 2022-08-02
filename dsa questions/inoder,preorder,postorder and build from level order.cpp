/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// tree implementation, levelOrdertraversal, reverseOrderTravrsal, Inorder, Preorder, postorder, buildFromLevelOrder

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
      
      cout<<"Enter data for inserting in left of "<<data<<endl;
      root->left = buildtree(root->left);
      cout<<"Enter data for inserting in right of "<<data<<endl;
      root->right = buildtree(root->right);
      
      return root;
    
}
// 1 3 5 -1 -1 7 -1 -1 9 11 -1 -1 13 -1 -1 
void inoder(node* root)
{
    if(root == NULL)
    return;
    
    inoder(root->left);
    cout<<root->data;
    inoder(root->right);
    
}
void preorder(node* root){
    if(root == NULL)
      return;
      cout<<root->data;
      preorder(root->left);
      preorder(root->right);
}

void postorder(node* root){
    if(root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
    
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

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<" enter the root data";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        
        cout<<"Enter left node for"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter right node for"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
    
}

int main()
{
//    printf("Hello World");

          node* root = NULL;
          buildFromLevelOrder(root);
          
        //  root = buildtree(root);
         levelOrderTraversal(root);
        //  reverseOrderTraversal(root);
        // inoder(root);
        // preorder(root);
        // postorder(root);
    return 0;
}
