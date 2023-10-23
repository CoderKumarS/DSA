#include <iostream>
#include <vector>
using namespace std;
class Queue
{
    vector<int> v;
    int front;
    int back;

public:
    Queue()
    {
        this->front = -1;
        this->back = -1;
    }
    void enqueue(int data)
    {
        v.push_back(data);
        this->back++;
        if(this->back==0) this->front=0;
    }

    void dequeue()
    {
        if (this->front == this->back)
        {
            this->front = -1;
            this->back = -1;
            this->v.clear();
        }
        else
            this->front++;
    }

    int getFront()
    {
        if (this->front == -1)
        {
            return -1;
        }
        return this->v[this->front];
    }

    bool isEmpty()
    {
        return this->front == -1;
    }
};
int main()
{
    Queue qu;
    qu.enqueue(5);
    qu.enqueue(15);
    qu.enqueue(25);
    qu.enqueue(35);
    qu.enqueue(35);
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.enqueue(55);
    cout << "Empty: " << qu.isEmpty() << endl;

    while (!qu.isEmpty())
    {
        cout << qu.getFront() << " ";
        qu.dequeue();
    }
    cout << endl;
    // cout << "size: " << qu.getSize() << endl;
    cout << "Empty: " << qu.isEmpty() << endl;
    return 0;
}