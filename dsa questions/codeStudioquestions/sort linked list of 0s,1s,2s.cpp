// ou are given a linked list having N number of nodes and each node will have an integer which can be 0, 1, or 2. You have to sort the given linked list in ascending order.
// For Example:
// Let the linked list be 1→0→2→1→2. 
// The sorted linked list for the given linked list will be 0→1→1→2→2.

// ans is:-

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

Node* sortList(Node *head)
{
    // Write your code here.
     int zerocount=0,onecount=0,twocount=0;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0)
            zerocount++;
        else if(temp->data == 1)
            onecount++;
        else if(temp->data == 2)
            twocount++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(zerocount!=0){
            temp->data = 0;
            zerocount--;
        }
        else if(onecount!=0){
            temp->data = 1;
            onecount--;
        }
        else if(twocount!=0){
            temp->data = 2;
            twocount--;
            
        }
            temp = temp->next;
    }    
        return head;
    
}
