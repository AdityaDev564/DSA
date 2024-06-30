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

int main()
{
    cout << "Enter the root element: ";
    Node *root = BinaryTree();
    return 0;
}