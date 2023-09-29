#include <iostream>
using namespace std;
// 1. Create node
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
// 2. Insertion in Linked list
// 2.1 Insert at the head of a linked list
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
// 2.2 Insert at the end of a linked list
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
// 3. Delete in Linked list
void deleteAtHead(node*&head){
    node* todelete = head;
    head=head->next;
    head->prev=NULL;
    delete todelete;//deallocate memory
}
void deletion(node *&head, int pos)
{
    if (pos==1)
    {
        deleteAtHead(head);
        return;
    }
    
    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}
// 4. Dispaly linked list
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    deletion(head, 4);
    display(head);
}