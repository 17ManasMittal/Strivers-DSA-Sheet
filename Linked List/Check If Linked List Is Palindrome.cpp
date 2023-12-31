/****************************************************************

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

*****************************************************************/
Node *findmid(Node *head){
    Node *fast=head;
    Node *slow=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
bool isPalindrome(Node *head)
{
    Node *midnode=findmid(head);
    Node *sstart=midnode->next;
    Node *curr=sstart;
    Node *prev=NULL;
    Node *forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    while(prev!=NULL){
        if((prev->data)!=(head->data)){
            return false;
        }
        prev=prev->next;
        head=head->next;
    }
    return true;
}
