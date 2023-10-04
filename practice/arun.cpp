#include<iostream>
using namespace std;
class Node{
    public:
          int val;
          Node* prev;
          Node* next;
          Node(int val){
      		this->val=val;
		this->prev = NULL;
		this->next = NULL;
          }
	  	
};
void imsertAtEnd(Node* &head,int data){
		Node* n = new Node(data);
                Node* temp = head;
		if(temp==NULL){
			head = n;
			return;
		}
		while(temp-> next!=NULL){
              		temp = temp-> next;
		}
		temp->next = n;
		n->prev=temp;
		return;
}
void deleteS(Node* &head,int data){
	Node* temp=head;
	if(head==NULL){
		cout<<"No element to delete";
		return;
	}
	if(temp->next->val==data){
		Node* del = temp->next;
		delete del;
		return;
	}
	while(temp->next!=NULL&&temp->next->val!=data){
		temp=temp->next;
	}
	Node* del = temp->next;
	temp->next=temp->next->next;
	delete del;
}
void display(Node* head){
	Node* temp = head;
	if(head == NULL){
		cout<<"no element";
		return;
	}
	while(temp!=NULL){
		cout<<temp->val<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
int main(){
	Node*head = NULL;
	imsertAtEnd(head,1);
	imsertAtEnd(head,2);
	imsertAtEnd(head,3);
	imsertAtEnd(head,4);
	imsertAtEnd(head,5);
	imsertAtEnd(head,6);
	deleteS(head,1);
	display(head);
}