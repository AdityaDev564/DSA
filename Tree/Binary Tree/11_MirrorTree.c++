#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;

    Node *temp = new Node(x);
    // Left side tree
    cout << "Enter the left child of " << temp->data << ": ";
    temp->left = BinaryTree();
    // Right side tree
    cout << "Enter the right child of " << temp->data << ": ";
    temp->right = BinaryTree();

    return temp;
}

void mirror(Node *node)
{
    // code here
    if (node == NULL)
        return;
    Node *temp = node->left;
    node->left = node->right;
    node->right = temp;
    mirror(node->left);
    mirror(node->right);
}

int main()
{

    return 0;
}