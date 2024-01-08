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
Node *revlist(Node *&prev,Node *&curr,Node *&forward){
    if(curr==NULL){
        return prev;
    }
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
    return revlist(prev,curr,forward);
}
Node* reverseLinkedList(Node *head)
{
    Node *prev=NULL;
    Node *curr=head;
    Node *forward=NULL;
    return revlist(prev,curr,forward);
}
