#include<iostream>
#include<bits\stdc++.h>
using namespace std;
class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
        this->capacity=c;
        arr = new int[c];
        this->top=-1;
    }

    void push(int data){
        if(this->top >= this->capacity-1){
            cout<<"OverFlow"<<endl;
            return;
        }
        this->top++;
        this->arr[this->top]=data;
    }

    int pop(){
        if(this->top == -1){
            cout<<"UnderFlow"<<endl;
            return INT_MIN;
        }
        this->top--;
    }

    int Top(){
        if(this->top ==-1) return -1;
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top==-1;
    }
    bool isFull(){
        return this->top==this->capacity-1;
    }

    int size(){
        return this->top+1;
    }
};
int main(){
    Stack st(5);
    cout<<st.size()<<"\n";
    st.push(54);
    st.push(44);
    st.push(34);
    st.push(24);
    st.pop();
    st.push(14);
    st.push(4);
    st.push(0);
    while(!st.isEmpty()){
        cout<<st.Top()<<" ";
        st.pop();
    }
    cout<<"\n"<<st.size();
    
    return 0;
}