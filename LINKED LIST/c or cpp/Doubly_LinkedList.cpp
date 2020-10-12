#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
};
void doubly_ll_traversal(Node* head){
    Node* p = head;
   while(p != NULL){
        
        cout<<p->data<<" ";
        p = p->next;
    }

    //Node* r =fifth;
    //cout<<"\nDoubly Linked list reverse traversal\n";
    //while(r != NULL){
        
        //cout<<r->data<<" ";
        //r = r->prev;
    //}
    
}

Node* insertAtFirst(Node* head, int data)
{
    Node* zero= new Node();
    zero->data=data;
    
    
    head->prev=zero;
    zero->prev=NULL;
    zero->next=head;
    head=zero;
    return head;
    
}
Node* insertAtlast(Node * head, int data){
    Node* last=new Node();
    last->data=data;
    
    Node* p= head;
    while(p->next != NULL){
        p=p->next;
    }
    p->next = last;
    last->prev = p;
    last->next = NULL;
    return head;
}



int main(){
    //Creation of linked list
    Node* head = new Node();
    Node* second =new Node();
    Node* third =new Node();
    Node* fourth =new Node();
    Node* fifth =new Node();
    
    //linking the nodes
    head->data=12;
    head->prev=NULL;
    head->next=second;
    
    second->data=22;
    second->prev=head;
    second->next=third;
    
    third->data=32;
    third->prev=second;
    third->next=fourth;
    
    fourth->data=45;
    fourth->prev=third;
    fourth->next=fifth;
    
    fifth->data=52;
    fifth->prev=fourth;
    fifth->next=NULL;
    
    cout<<"Doubly linked list BEFORE insertion\n";
    doubly_ll_traversal(head);
    cout<<"\n";
    
    head=insertAtFirst(head,31);
    cout<<"\n";
    
    head = insertAtlast(head, 66);
    cout<<"\n";
    
    cout<<"Doubly linked list AFTER insertion\n";
    doubly_ll_traversal(head);
    
    
    
    
    return 0;
    
}
