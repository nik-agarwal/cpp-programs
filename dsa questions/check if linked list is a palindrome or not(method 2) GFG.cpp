// Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

// Example 1:

// Input:
// N = 3
// value[] = {1,2,1}
// Output: 1
// Explanation: The given linked list is
// 1 2 1 , which is a palindrome and
// Hence, the output is 1.

// method 2

// Answer's time complexity is O(N) and space complexity is O(1).

// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  private:
    //Function to check whether the list is palindrome.
    
    Node * middle(Node * head){
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast!=NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    
    Node* reverse(Node* mid){
         Node* prev = NULL;
        Node* curr = mid;
        Node* forward = NULL;
        while(curr!=NULL){
            
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
            }
            return prev;
    }
   public: 
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head->next == NULL)
        return true;
          
        // step 1 - find middle element
        Node* mid = middle(head);
        
        // step 2 - reverse the other half list
        Node* temp = mid->next;
        mid->next = reverse(temp);
            
        // step 3 - compare the both list's element
        Node* head1 = head;
        Node* head2 = mid->next;
        while(head2!=NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1=head1->next;
            head2 = head2->next;
        }
        // step 4 - again reverse the last half list
        temp = mid->next;
        mid->next = reverse(temp);
        
        return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends
