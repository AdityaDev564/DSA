#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// Returns true if the nodes with values 'a' and 'b' are cousins. Else returns false
bool parent(Node *root, int a, int b)
{
    if (root == NULL)
        return 0;

    if (root->left && root->right)
    {
        if (root->left->data == a && root->right->data == b)
            return 1;
        if (root->left->data == b && root->right->data == a)
            return 1;
    }
    // Checking for left and right part
    return parent(root->left, a, b) || parent(root->right, a, b);
}

bool isCousins(Node *root, int a, int b)
{
    // Find the level
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return 0;
    queue<Node *> q;
    q.push(root);
    int l1 = -1, l2 = -1;
    int level = 0;
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->data == a)
                l1 = level;
            if (temp->data == b)
                l2 = level;
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        level++;
        if (l1 != l2) // same level pe nhi hai
            return 0;

        if (l1 != -1 && l2 != -1) // dono ke liye level mil gaya
            break;
    }

    return !parent(root, a, b); // check - a & b ke parent same hai ya nhi
}

int main()
{

    return 0;
}