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

int height(Node *root, bool &valid)
{
    if (root == NULL)
        return 0;

    int l = height(root->left, valid);
    if (valid)
    {
        int r = height(root->right, valid);
        if (abs(l - r) > 1)
            valid = 0;

        return 1 + max(l, r);
    }
    return -1;
}

bool isBalanced(Node *root)
{
    bool valid = 1;
    height(root, valid);
    return valid;
}

int main()
{

    return 0;
}