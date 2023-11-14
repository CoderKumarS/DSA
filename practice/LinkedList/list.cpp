#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int data):data(data), next(NULL){}		
};
void insertAtHead(node* &root,int data){
	node* newNode=new node(data);
	newNode->next=root;
	root=newNode;
}
void insertAtTail(node* &root,int data){
	node* newNode = new node(data);
	if(root==NULL){
		insertAtHead(root,data);
		return;
	}
	node* temp=root;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}
void display(node* root){
	node* temp=root;
	while(temp!=NULL){
		cout<<temp->data<<"-> ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
void insertAtNthposition(node*& root, int pos, int data){
	if(pos==1){
		insertAtHead(root,data);
		return; 
	}
	int count=2;
	node* temp=root;
	while(temp!=NULL&&count!=pos){
		temp=temp->next;
		count++;
	}
	node* newNode= new node(data);
	newNode->next=temp->next;
	temp->next=newNode; 
}
void updateAtNthposition(node*& root, int pos, int data){
	if(pos==1){
		root->next->data=data;
		return; 
	}
	int count=1;
	node* temp=root;
	while(temp!=NULL&&count!=pos){
		temp=temp->next;
		count++;
	}
	temp->data=data;
}
void deleteAtHead(node* root){
	node* temp=root;
	root=temp->next;
	delete temp;
}
void deletion(node*&root, int data){
	if(root==NULL){
		cout<<"No element to delete"<<endl;
	}
	node* temp=root;
	if(root->next->==data){
		deleteAtHead(root);
	}
	while(temp!=NULL&&temp->next->data!=data){
		temp=temp->next;
	}
	node* todel=temp->next;
	temp->next=todel->next;
	delete todel;
}
int main(){
	node* root=NULL;
	insertAtTail(root, 5);
	insertAtTail(root, 15);
	insertAtTail(root, 25);
	insertAtTail(root, 35);
	insertAtTail(root, 45);
	insertAtTail(root, 55);
	insertAtHead(root, 0);
	insertAtNthposition(root,3,16);
	display(root);
	updateAtNthposition(root,2,12);
	display(root);
}
