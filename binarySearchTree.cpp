// You are using GCC
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data =val;
        left= NULL;
        right= NULL;
    }
};
node* insertBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    }else{
        root->right=insertBST(root->right,val);   
    }
    return root;
}
void inorder(node* root)
{
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root)
{
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root= NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    cout<<"Inorder: ";
    inorder(root);
    cout<<endl<<"Preorder: ";
    preorder(root);
    cout<<endl<<"Postorder: ";
    postorder(root);
    return 0;
}