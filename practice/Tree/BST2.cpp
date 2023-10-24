#include <iostream>
#include <bits\stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int val) : data(val), left(nullptr), right(nullptr) {}
};
node *searchInBST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return searchInBST(root->left, key);
    }
    return searchInBST(root->right, key);
}
int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(6);

    if (searchInBST(root, 1) == NULL)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
    return 0;
}