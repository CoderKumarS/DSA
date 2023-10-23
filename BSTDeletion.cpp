#include<iostream>
using namespace std;
class Tree
{
    public:
    int data;
    Tree* left=NULL,*right = NULL;
    Tree(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
Tree *Delete(Tree* root, int x){
    if(root==NULL){
        cout<<"Node not found";
        return NULL;
    }
    if(root->data>x){
        root->left=Delete(root->left,x);
    }else if(root->data<x){
        root->right=Delete(root->right,x);
    }else{
        if(root->left==NULL){
            Tree * temp=root->right;
            free(root);
            return temp;
        }else if(root->right==NULL){
            Tree * temp=root->left;
            free(root);
            return temp;
            
        }else{
            Tree * temp=root->right;
            while(temp->left!=NULL)
                temp=temp->left;
            
            root->data=temp->data;
            root->right=Delete(root->right, temp->data);
        }
    }
    return root;
}
void inorder(Tree* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Tree* root= new Tree(15);
    root->left=new Tree(13);
    root->right=new Tree(18);
    root->left->left=new Tree(8);
    root->left->right=new Tree(14);
    root->right->left=new Tree(16);
    root->right->right=new Tree(19);
    
    cout<<"Inorder Traversal before deletion \n";
    inorder(root);
    cout<<endl;
    cout<<"Value to be deleted is 13\n";
    Delete(root,13);
    cout<<"Inorder Traversal after deletion \n";
    inorder(root);
    
}