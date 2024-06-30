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

Node *insert(Node *root, int target)
{
    // base case
    if (root == NULL)
    {
        Node *temp = new Node(target);
        return temp;
    }
    if (target < root->data)
        root->left = insert(root->left, target);
    else
        root->right = insert(root->right, target);

    return root;
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    int arr[] = {6, 3, 17, 5, 11, 18, 2, 1, 20, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = NULL;

    for (int i = 0; i < 10; i++)
    {
        root = insert(root, arr[i]);
    }

    // Traversal
    inOrder(root);
    return 0;
}