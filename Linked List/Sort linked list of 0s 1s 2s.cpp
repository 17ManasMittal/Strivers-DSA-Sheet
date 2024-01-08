/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    Node *temp=head;
    Node *zhead=NULL,*ohead=NULL,*thead=NULL;
    Node *ztail=NULL,*otail=NULL,*ttail=NULL;
    while(temp!=NULL){
        if(temp->data==0){
            Node *newnode=new Node(0);
            newnode->next=NULL;
            if(zhead==NULL){
                zhead=ztail=newnode;
            }
            ztail->next=newnode;
            ztail=newnode;
        }
        else if(temp->data==1){
            Node *newnode=new Node(1);
            newnode->next=NULL;
            if(ohead==NULL){
                ohead=otail=newnode;
            }
            otail->next=newnode;
            otail=newnode;
        }
        else{
            Node *newnode=new Node(2);
            newnode->next=NULL;
            if(thead==NULL){
                thead=ttail=newnode;
            }
            ttail->next=newnode;
            ttail=newnode;
        }
        temp=temp->next;
    }
    ztail->next=ohead;
    otail->next=thead;
    return zhead;
}
