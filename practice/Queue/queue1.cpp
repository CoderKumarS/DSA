#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // Node(int data):data(data), next(NULL){} //myself
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
    Node *head;
    Node *tail;
public:
    Queue(){
        this->head = NULL;
        this->tail = NULL;
    }
    int size = 0;
    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (this->head == NULL)
        {
            this->head = this->tail = newNode;
        }
        else
        {
            this->tail->next = newNode;
            this->tail = newNode;
        }
        this->size++;
    }
    void dequeue()
    {
        if (this->head == NULL)
        {
            cout << "NO element to pop" << endl;
            return ;
        }
        else
        {
            Node *temp = this->head;
            Node* newHead=this->head->next;
            this->head=newHead;
            // this->head = this->head->next;//myself
            if(this->head==NULL){
                this->tail=NULL;
            }
            temp->next=NULL;
            delete temp;
            this->size--;
        }
    }

    int getSize(){
        return this->size;
    }

    bool isEmpty(){
        return this->head==NULL;
    }
    int front(){
        if(this->head==NULL) return -1;
        return this->head->data;
    }
};
int main()
{
    Queue qu;
    qu.enqueue(5);
    qu.enqueue(15);
    qu.enqueue(25);
    qu.enqueue(35);
    qu.dequeue();
    cout<<"empty: "<<qu.isEmpty()<<endl;

    while(!qu.isEmpty()){
        cout<<qu.front()<<" ";
        qu.dequeue();
    }
    cout<<endl;
    cout<<"size: "<<qu.getSize()<<endl;
    cout<<"empty: "<<qu.isEmpty()<<endl;
    return 0;
}