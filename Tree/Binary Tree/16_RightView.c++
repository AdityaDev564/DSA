#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// Should return  right view of tree

// Function to return list containing elements of right view of binary tree.
vector<int> rightView(Node *root)
{
    // Your Code here
    vector<int> ans;
    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        ans.push_back(q.front()->data);
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            if (temp->right)
                q.push(temp->right);
            if (temp->left)
                q.push(temp->left);
        }
    }
    return ans;
}

int main()
{

    return 0;
}