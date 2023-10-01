// queue using linked list
/*
#include<iostream>
using namespace std;
#define n 100
class queue{
	int*arr;
	int front;
	int back;
	public:
	queue(){
		arr=new int[n];
		front = -1;
		back = -1;
	}
	void push(int val){
		if(back==n-1){
		cout<<"Queue Overflow"<<endl;
		return ;
		}
		back++;
		arr[back]=val;
		if(front==-1){  front++;  }
	}
	void pop(){
		if(front==-1 || front>back){
		cout<<"Queue underflow"<<endl;
		return ;
		}
		front++;
	}
	int peek(){
		if(front== -1 || front>back){
		cout<<"no element in top"<<endl;
		return -1;
		}
		return arr[front];
	}
	bool isempty(){
		if(front==-1 || front>back){
		return true;
		}
		return false;
	}
};
int main(){
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.isempty()<<endl;
}
*/
// queue using linked list
/*
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node(int val): data(val), next(NULL) {}
};
class queue{
	node* front;
	node* back;
	public:
	queue(): front(NULL), back(NULL) {}
	void push(int x){
		node* n = new node(x);
		if(front == NULL){
			back = n;
		front = n;
		return;
		}
		back -> next = n;
		back=n;
	}
	void pop(){
		if(front==NULL){
		cout<<"underflow"<<endl;
		return;
		}
		node*del = front;
		front=front->next;
		delete del;
	}
	int peek(){
		if(front==NULL){
		cout<<"No element in queue"<<endl;
		return -1;
		}
		return front->data;
	}
	bool isempty(){
		if(front==NULL){  return true;  }
		return false;
	}
};
int main(){
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.peek()<<endl;
	q.pop();
	cout<<q.isempty()<<endl;
}
*/
// queue using stl
#include <iostream>
#include <queue>
using namespace std;
int main()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout << "size: " << q.size() << endl;
	cout << "front: " << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
	q.pop();
	cout << "back: " << q.back() << endl;
	q.pop();
	cout << "empty: " << q.empty() << endl;
	cout << "size: " << q.size() << endl;
}