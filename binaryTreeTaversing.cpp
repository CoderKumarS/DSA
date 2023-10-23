// You are using GCC
#include<iostream>
#include<stdlib.h>

using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data){
    struct node *node = (struct node *)malloc (sizeof(struct node));
    node ->data = data;
    node ->left = NULL;
    node ->right = NULL;
    
    return (node);
}
//traverse preorder
void traversePreOrder(struct node *temp){
    if(temp!=NULL){
        cout<<" "<<temp->data;
        traversePreOrder(temp->left);
        traversePreOrder(temp->right);
    }
}

//traverse inorder
void traverseInOrder(struct node *temp){
    if(temp!=NULL){
        traverseInOrder(temp->left);
        cout<<" "<<temp->data;
        traverseInOrder(temp->right);
    }
}
//traverse post order
void traversePostOrder(struct node *temp){
    if(temp!=NULL){
        traversePostOrder(temp->left);
        traversePostOrder(temp->right);
        cout<<" "<<temp->data;
    }
}

int main(){
    struct node *root = newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    
    cout<<"Preorder Traversal: ";
    traversePreOrder(root);
    cout<<"\nPostorder Traversal: ";
    traversePostOrder(root);
    cout<<"\nInorder Traversal: ";
    traverseInOrder(root);
}
