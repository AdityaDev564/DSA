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
/*
bool isIdentical(Node *r1, Node *r2)
{
    if (r1 == NULL && r2 == NULL)
        return true;
    if (r1 == NULL || r2 == NULL)
        return false;
    return (r1->data == r2->data && isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right));
}
*/

bool isIdentical(Node *r1, Node *r2)
{
    // Your Code here
    if (r1 == NULL && r2 == NULL)
        return true;
    if (r1 == NULL || r2 == NULL)
        return false;
    queue<Node *> q1;
    queue<Node *> q2;
    q1.push(r1);
    q2.push(r2);
    while (!q1.empty() && !q2.empty())
    {
        Node *temp1 = q1.front();
        q1.pop();
        Node *temp2 = q2.front();
        q2.pop();

        if (temp1->data != temp2->data)
            return false;
        // Check left children
        if (temp1->left && temp2->left)
        {
            q1.push(temp1->left);
            q2.push(temp2->left);
        }
        else if (temp1->left || temp2->left)
        {
            return false;
        }

        // Check right children
        if (temp1->right && temp2->right)
        {
            q1.push(temp1->right);
            q2.push(temp2->right);
        }
        else if (temp1->right || temp2->right)
        {
            return false;
        }
    }
    return q1.empty() && q2.empty();
}

int main()
{

    return 0;
}