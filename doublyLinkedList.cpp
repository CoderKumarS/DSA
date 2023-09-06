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
    head->prev=n;
}
