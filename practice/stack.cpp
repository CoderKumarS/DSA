// stack using array
/*
#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        // if(top==-1){ return true; }
        // return false;
        return top == -1;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    st.empty();
    return 0;
}
*/
// stack using linked list
/*
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val): data(val), next(NULL){}
};
class stack{
    node* top;
    public:
    stack(): top(NULL){}

    void push(int val){
        node* newNode = new node(val);
        if(top == NULL){  top = newNode;  }
        else{
        newNode->next = top;
        top = newNode;
        }
    }
    void pop(){
        if(isEmpty()){
        cout<<"No element"<<endl;
        return;
        }
        node* del = top;
        top= top->next;
        delete del;
    }
    bool isEmpty(){
        return top==NULL;
    }
    int Top(){
        if(isEmpty()){
        cout<<"No element"<<endl;
        return -1;
        }
        return top->data;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
}
*/
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
}