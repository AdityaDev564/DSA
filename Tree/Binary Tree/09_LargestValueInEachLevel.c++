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

vector<int> largestValues(Node *root)
{
    // code here
    queue<Node *> q;
    q.push(root);
    vector<int> ans;
    int maxi = INT_MIN;
    while (!q.empty())
    {
        int n = q.size();
        while (n--)
        {
            Node *temp = q.front();
            q.pop();
            maxi = max(maxi, temp->data);
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        ans.push_back(maxi);
        maxi = INT_MIN;
    }
    return ans;
}

int main()
{

    return 0;
}