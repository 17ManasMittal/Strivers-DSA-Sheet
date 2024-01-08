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

Node* removeKthNode(Node* head, int K)
{
    int cnt=0;
    Node *temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int nodedel=cnt-K+1;
    int i=1;
    temp=head;
    if(nodedel==1){
        head=head->next;
        return head;
    }
    while(i<nodedel-1){
        temp=temp->next;
        i++;
    }
    Node *del=temp->next;
    temp->next=del->next;
    delete del;
    return head;
}
