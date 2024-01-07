/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr) {};
 *		Node(int x) : data(x), next(nullptr) {}
 *		Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* segregateEvenOdd(Node* head)
{
    Node *evenh=NULL;
    Node *eventail=NULL;
    Node *oddh=NULL;
    Node *oddtail=NULL;
    Node *temp=head;
    while(temp!=NULL){
        if((temp->data)%2==0){
            Node *newnode=new Node(temp->data);
            newnode->next=NULL;
            if(evenh==NULL){
                evenh=eventail=newnode;
            }else{
                eventail->next=newnode;
                eventail=newnode;
            }
        }
        else{
            Node *newnode=new Node(temp->data);
            newnode->next=NULL;
            if(oddh==NULL){
                oddh=oddtail=newnode;
            }else{
                oddtail->next=newnode;
                oddtail=newnode;
            }
        }
        temp=temp->next;
    }
    eventail->next=oddh;
    return evenh;
}
