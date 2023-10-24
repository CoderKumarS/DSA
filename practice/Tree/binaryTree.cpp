#include <iostream>
#include <bits\stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) : data(data), left(NULL), right(NULL) {}
};

Node *buildTree(Node *root)
{
    cout << "Enter: ";
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
        return nullptr;

    cout << "Left of " << data << " : \n";
    root->left = buildTree(root->left);
    cout << "Right of " << data << " : \n";
    root->right = buildTree(root->right);
}

Node *levelOrderTraversal(Node *root)
{
    queue<Node *> qu;
    qu.push(root);
    qu.push(NULL);
    while (not qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();
        if (temp == NULL)
        {
            cout << "\n";
            if (not qu.empty())
            {
                qu.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                qu.push(temp->left);
            }
            if (temp->right)
            {
                qu.push(temp->right);
            }
        }
    }
}
void inOrder(Node* root){
    if(root==nullptr) return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(Node* root){
    if(root==nullptr) return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node* root){
    if(root==nullptr) return ;
    cout<<root->data<<" ";
    postOrder(root->left);
    postOrder(root->right);
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout<<"Print\n";
    levelOrderTraversal(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;
    postOrder(root);
    return 0;
}

//         1
//     2       3
// 4       56     7