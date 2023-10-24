#include <iostream>
#include <bits\stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val) : data(val), left(nullptr), right(nullptr) {}
};
node *insertBST(node *root, int val)
{
    if (root == NULL)
        return new node(val);
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
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
    node *root= NULL;
    root=insertBST(root, 5);
    insertBST(root,4);
    insertBST(root,6);
    insertBST(root,3);
    insertBST(root,7);
    insertBST(root,7);
    insertBST(root,1);
    insertBST(root,2);
    insertBST(root,8);
    inOrder(root);
    cout<<endl;
    return 0;
}