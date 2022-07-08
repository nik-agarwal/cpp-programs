// Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

// For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

// Example 1:

// Input:
// N = 2
// valueN[] = {4,5}
// M = 3
// valueM[] = {3,4,5}
// Output: 3 9 0  
// Explanation: For the given two linked
// list (4 5) and (3 4 5), after adding
// the two linked list resultant linked
// list will be (3 9 0).

// answer is:-

// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
   struct Node* reverse(struct Node* head){
         Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while(curr!=NULL){
            
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
            }
            return prev;
    }
    
    void insertattail(struct Node* &head,struct Node* &tail, int val){
        Node* temp= new Node(val);
        if(head==NULL){
            head=temp;
            tail=temp;
        }   
        else{
            tail->next = temp;
            tail=temp;
        }
    }
    
   struct Node* sum(struct Node* first, struct Node* second){
        int carry = 0;
        Node* anshead = NULL;
        Node* anstail = NULL;
        
        while(first!=NULL || second!= NULL || carry!=0){
            int val1=0;
            int val2=0;
            if(first!=NULL)
            {
                val1=first->data;
            }
            if(second!=NULL){
                val2=second->data;
            }
            int sum = val1 + val2 + carry;
            int digit = sum%10;
            insertattail(anshead, anstail, digit);
            
            carry = sum/10;
            
            if(first!= NULL)
            first = first->next;
            
            if(second!=NULL)
            second = second->next;
            
        }
        return anshead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        // reverse both list
        first = reverse(first);
        second= reverse(second);
        
        // add both list
        Node* ans= sum(first,second);
        
        // reverse thelist to get actual answer
        ans = reverse(ans);
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
