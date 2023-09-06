#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
    node* prev;
    node(int val);
};

node::node(int val)
{
    node* n = new node(val);
    next= NULL;
    prev= NULL;
}
void insertAtHead(node* head, int val){
    node* n = new node(val);
    n->next = head;
    if (head!=NULL)
    {
        head->prev=n;
    }
}
void display(node* head){
    node* temp = head;
    while (temp->next!=NULL)
    {
        cout<<temp->data<<"->";
    }
    cout<<endl;
}
int main()
{
    node* head = NULL;
    insertAtHead(head , 10 );
    display(head);
}
