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

Node *deleteNode(Node *root, int target)
{
    // base condition
    if (root == NULL)
        return NULL;
    if (root->data > target)
    {
        root->left = deleteNode(root->left, target);
        return root;
    }
    else if (root->data < target)
    {
        root->right = deleteNode(root->right, target);
        return root;
    }
    else
    {
        // leaf node
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // one child exists
        // left child exists
        if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right child exists
        else if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // both children exist
        else
        {
            // Find the greatest element from left
            Node *child = root->left;
            Node *parent = root;
            // Rightmost child of left child
            while (child->right != NULL)
            {
                parent = child;
                child = child->right;
            }
            if (root != parent)
            {
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;
            }
            // root == parent
            else
            {
                child->right = root->right;
                delete root;
                return child;
            }
        }
    }
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

    return 0;
}