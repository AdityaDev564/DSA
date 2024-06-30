#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void LinkedListTraversal(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *reverseLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

// Recursive Solution
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *newHead = reverse(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = NULL;

    return newHead;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArr2LL(arr);
    LinkedListTraversal(head);
    head = reverseLL(head);
    LinkedListTraversal(head);
    head = reverse(head);
    LinkedListTraversal(head);
    return 0;
}