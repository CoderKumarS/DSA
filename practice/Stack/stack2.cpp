#include <iostream>
#include <bits\stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(NULL) {}
};

class Stack
{
    Node *head;
    int capacity;
    int currSize;

public:
    Stack(int c) : head(NULL), capacity(c), currSize(0) {}

    bool isEmpty() { return this->head == NULL; }

    bool isFull() { return this->capacity == this->currSize; }

    void push(int data)
    {
        if (this->capacity == this->currSize)
        {
            cout << "Overflow\n";
            return;
        }
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->currSize++;
    }

    int pop()
    {
        if (this->head == NULL)
        {
            cout << "UnderFlow\n";
            return INT_MIN;
        }
        Node *newHead = this->head->next;
        this->head->next = NULL;
        Node *tobeRemoved = this->head;
        int result = tobeRemoved->data;
        delete tobeRemoved;
        this->head = newHead;
        this->currSize--;
        return result;
    }
    int size() { return this->currSize; }
    int Top()
    {
        if (this->head == NULL)
        {
            cout << "UnderFlow\n";
            return INT_MIN;
        }
        return this->head->data;
    }
};
int main()
{
    Stack st(5);
    cout << "Size: " << st.size() << "\n";
    st.push(54);
    st.push(44);
    st.push(34);
    st.push(24);
    st.pop();
    cout << "Size: " << st.size() << "\n";
    st.push(14);
    st.push(4);
    st.push(0);
    cout << "Size: " << st.size() << "\n";
    while (!st.isEmpty())
    {
        cout << st.Top() << " ";
        st.pop();
    }
    cout << "\nSize: "
         << st.size();

    return 0;
}