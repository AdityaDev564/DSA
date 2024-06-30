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

void PreOrder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node *root)
{
    if (root == NULL)
        return;

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

void PostOrder(Node *root)
{
    if (root == NULL)
        return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

vector<int> LevelOrder(Node *root)
{
    vector<int> ans;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    return ans;
}

int main()
{
    cout << "Enter the root element: ";
    Node *root = BinaryTree();
    cout << "PreOrder: ";
    PreOrder(root);
    cout << "\nInOrder: ";
    InOrder(root);
    cout << "\nPostOrder: ";
    PostOrder(root);
    cout << "\nLevelOrder: ";
    vector<int> ans = LevelOrder(root);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}