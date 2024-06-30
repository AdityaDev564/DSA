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

bool isBST(Node *root, int &prev)
{
    // Base case: If the current node is NULL, return true
    if (root == NULL)
        return true;

    // Recursively check the left subtree
    if (!isBST(root->left, prev))
        return false;

    // Check the current node's value against the previous node's value
    if (root->data <= prev)
        return false;

    // Update the previous node's value to the current node's value
    prev = root->data;

    // Recursively check the right subtree
    return isBST(root->right, prev);
}

int main()
{

    return 0;
}