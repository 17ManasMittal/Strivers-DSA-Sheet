/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *reshead=NULL;
    Node *restail=NULL;
    Node *i=num1;
    Node *j=num2;
    int carry=0;
    while(i!=NULL&&j!=NULL){
        int dig1=i->data;
        int dig2=j->data;
        int sum=(dig1+dig2+carry);
        carry=sum/10;
        Node *newnode=new Node(sum%10);
        newnode->next=NULL;
        if(reshead==NULL){
            reshead=restail=newnode;
        }else{
            restail->next=newnode;
            restail=newnode;
        }
        i=i->next;
        j=j->next;
    }
    while(i!=NULL){
        int dig1=i->data;
        int sum=(dig1+carry);
        carry=sum/10;
        Node *newnode=new Node(sum%10);
        newnode->next=NULL;
        if(reshead==NULL){
            reshead=restail=newnode;
        }else{
            restail->next=newnode;
            restail=newnode;
        }
        i=i->next;
    }
    while(j!=NULL){
        int dig1=j->data;
        int sum=(dig1+carry);
        carry=sum/10;
        Node *newnode=new Node(sum%10);
        newnode->next=NULL;
        if(reshead==NULL){
            reshead=restail=newnode;
        }else{
            restail->next=newnode;
            restail=newnode;
        }
        j=j->next;
    }
    while(carry!=0){
        int sum=(carry);
        carry=sum/10;
        Node *newnode=new Node(sum%10);
        newnode->next=NULL;
        if(reshead==NULL){
            reshead=restail=newnode;
        }else{
            restail->next=newnode;
            restail=newnode;
        }
    }
    return reshead;
}
