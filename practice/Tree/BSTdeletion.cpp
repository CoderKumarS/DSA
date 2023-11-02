#include <iostream>
#include <bits\stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val) : data(val), left(nullptr), right(nullptr) {}
};
node *inOrderSucc(node *root)
{
    node* curr = root;
    while(curr&&curr->left !=NULL){
        curr= curr->left;
    }
    return curr;
}
node *deleteInBST(node *root, int key)
{
    if (root->data > key)
    {
        root->left=  deleteInBST(root->left, key);
    }
    else if (root->data < key)
    {
        root->right=  deleteInBST(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        node *temp = inOrderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
    }
    return root;
}
void inOrder(node* root){
    if(root==nullptr) return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);
    inOrder(root);

    root = deleteInBST(root, 1);
    cout<<endl;
    inOrder(root);
    
    return 0;
}