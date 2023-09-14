#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int val);
};

Node::Node(int val)
{
    data =val;
    next=NULL;
}
void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    if (head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    Node* temp = head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void inserAtTail(Node* &head, int val){
    if (head==NULL) 
    {
        insertAtHead(head,val);
        return;
    }
    Node* n = new Node(val);
    Node* temp = head;
    while (temp!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n; 
}
void deleteAtHead(Node* &head){
    Node* temp = head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    Node* todelete= head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deletion(Node* &head, int pos){
    if (pos==1) 
    {
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;
    while (count!=1)
    {
        temp-temp->next;
        count++;
    }
    Node* todelete = temp->next;
    temp->next= temp->next->next;
    delete todelete;
}
void display(Node* head){
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while (temp!=head);
    cout<<endl;
}
int main(){
    Node* head = NULL;
    inserAtTail(head,1);
    inserAtTail(head,2);
    inserAtTail(head,3);
    // inserAtTail(head,4);
    // inserAtTail(head,5);
    display(head);
    return 0;
}