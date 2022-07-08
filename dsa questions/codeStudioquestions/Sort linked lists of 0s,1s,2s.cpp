// You are given a linked list having N number of nodes and each node will have an integer which can be 0, 1, or 2. You have to sort the given linked list in ascending order.
// For Example:
// Let the linked list be 1→0→2→1→2. 
// The sorted linked list for the given linked list will be 0→1→1→2→2.

// Method 2 (don't change the value of node , use 3 list and merge it ).

// Answer is:-

/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
void insertattail(Node* &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}
Node* sortList(Node *head)
{
    // Write your code here.
      Node* zerohead = new Node(-1);
      Node* zerotail = zerohead;
      Node* onehead = new Node(-1);
      Node* onetail = onehead;
      Node* twohead = new Node(-1);
      Node* twotail = twohead;
       Node* curr = head;
    while(curr!= NULL){
        if(curr->data == 0)
            insertattail(zerotail,curr);
        else if(curr->data == 1)
            insertattail(onetail,curr);
        else if(curr->data == 2)
            insertattail(twotail,curr);
        curr = curr->next;
    }
    if(onehead->next!=NULL){
        zerotail->next = onehead->next;
    }
    else{
        zerotail->next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next = NULL;
    
    head = zerohead->next;
    
    delete zerohead;
    delete onehead;
    delete twohead;
    
    return head;
}

