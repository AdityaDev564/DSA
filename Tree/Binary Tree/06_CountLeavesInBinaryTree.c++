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

int CountLeavesInBinaryTree(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    return CountLeavesInBinaryTree(root->left) + CountLeavesInBinaryTree(root->right);
}

int main()
{

    return 0;
}